#################################################
# File name: movefile.sh
# Author: 
# mail: 
# Create Time: 2016-04-18 15:53
#################################################
#!/bin/bash

#读取文件的路径，输出目录的路径，临时文件
source ./moveini.sh
date >> mvfile.log

day=`date "+%Y%m%d"`


#挑出新增加的话单存入move.tmp
function picknew()
{
	if [ 1 -ne $# ]
	then
		echo 'para error!'
		exit 1
	fi  
	svc_name=$1
	#如果文件不存在就创建文件
	if [ ! -f ${svc_name}oldlist.tmp ]
	then
		touch ${svc_name}oldlist.tmp
	fi  
	#读取目录下的文件给newlist.tmp

	#ls -t ${frompath[$1]} > $1newlist.tmp
	expect look.exp "ls -t ${frompath[$svc_name]}" \
	${host_user[$svc_name]} ${host_passwd[$svc_name]} ${host_ip[$svc_name]} | \
	grep -i "${svc_name}201" | grep -v *.gz |tr -d "\r" > ${svc_name}newlist.tmp

	#如果出现空的newlist.tmp结束本次循环		
	if [ ! -s ${svc_name}newlist.tmp ]
	then
		rm ${svc_name}newlist.tmp
		continue
	fi

	if [ $? -eq 2 ] 
	then
		echo "${frompath[$svc_name]} not exits" >>mvfile.log
	fi  
	#新旧对比给diff.tmp
	diff -y ${svc_name}newlist.tmp ${svc_name}oldlist.tmp > ${svc_name}diff.tmp
	#筛选出结果给move.tmp
	grep '<' ${svc_name}diff.tmp |awk -F '<' '{print $1}' > ${svc_name}move.tmp
	#打印日志move.tmp中的内容
	echo "files in ${svc_name}move.tmp">>mvfile.log
	cat ${svc_name}move.tmp >>mvfile.log
	#新文件列表复制给旧文件列表
	cat ${svc_name}newlist.tmp > ${svc_name}oldlist.tmp
	#删除newlist.tmp diff.tmp  不能删除move.tmp，留给外层函数用

        #rm -f ${svc_name}newlist.tmp ${svc_name}diff.tmp
}

	
#主函数开始
for i in ${service[*]}
do
	if [ 'vlte' == $i ] || [ 'vig' == $i ]
	then
		continue
	fi
	frompath[$i]="${frompath[$i]}$day/"
	#echo ${frompath[$i]}
done

#frompath[visms]="${frompath[visms]}$day/"
#topath[vid]="${topath[vid]}$day/"
#test
if [ testx == "$1"x ]
then
	echo ${frompath[visms]}
	echo ${topath[vid]}
	echo ${frompath[vig]} 
fi


for i in ${service[*]}
do
	picknew $i
	if [ "test"x == "$1"x ]
	then
		continue
	fi
	 
	#逐行拷贝move.tmp中的内容
	while read line
	do
		#使用expect的方式调用
		expect ./get.exp "get ${frompath[$i]}$line ${topath[$i]}" ${host_user[$i]} \
		${host_passwd[$i]} ${host_ip[$i]} 
		
		#cp ${frompath[$i]}$line ${topath[$i]}
		echo "$line move success" >>mvfile.log
		done < ${i}move.tmp

	#删除move.tmp
	#rm -f ${i}move.tmp
done
	


