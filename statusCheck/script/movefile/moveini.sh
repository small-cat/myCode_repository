declare -a service
service[0]='vid'
service[1]='visms'
service[2]='vmms'
service[3]='vim'
service[4]='vimm'
service[5]='vi'
service[6]='vig'
service[7]='vlte'
service[8]='vgg'

#声明取话单主机的ip
ip_43='10.255.245.43'
ip_32='10.255.245.32'
declare -A host_ip
host_ip=( \
[vid]=$ip_43 \
[visms]=$ip_43 \
[vmms]=$ip_43 \
[vim]=$ip_43 \
[vimm]=$ip_43 \
[vi]=$ip_43 \
[vig]=$ip_32 \
[vlte]=$ip_32 \
[vgg]=$ip_32 
)

#声明取话单主机的账号
user_43='mediation'
user_32='mediation'
declare -A host_user
host_user=( \
[vid]=$user_43 \
[visms]=$user_43 \
[vmms]=$user_43 \
[vim]=$user_43 \
[vimm]=$user_43 \
[vi]=$user_43 \
[vig]=$user_32 \
[vlte]=$user_32 \
[vgg]=$user_32  
)

#声明取话单主机的密码
passwd_43='mediation-123'
passwd_32='mediation-123'
declare -A host_passwd
host_passwd=( \
[vid]=$passwd_43 \
[visms]=$passwd_43 \
[vmms]=$passwd_43 \
[vim]=$passwd_43 \
[vimm]=$passwd_43 \
[vi]=$passwd_43 \
[vig]=$passwd_32 \
[vlte]=$passwd_32 \
[vgg]=$passwd_32  
)

#声明取话单路径的数组
declare -A frompath
frompath=( \
[vid]='/data1/data/decode/gsm/bak/' \
[visms]='/data1/data/decode/visms/bak/' \
[vmms]='/data1/data/decode/mms/bak/' \
[vim]='/data1/data/decode/sms_inter/bak/' \
[vimm]='/data1/data/decode/mms_inter/bak/' \
[vi]='/data1/data/decode/sms_inter_roam/bak/' \
[vig]='/data1/data/rating/gprs/bak/' \
[vlte]='/data1/data/rating/gprs/bak/' \
[vgg]='/data1/data/decode/gprs_inter/bak/'  
)

#暂时输入文件在一个路径下
tpath=/app/aijk/khall/boss/recordfile

#输入文件的数组
declare -A topath
topath=( \
[vid]=$tpath \
[visms]=$tpath \
[vmms]=$tpath \
[vim]=$tpath \
[vimm]=$tpath \
[vi]=$tpath \
[vig]=$tpath \
[vlte]=$tpath \
[vgg]=$tpath 
)

#声明临时文件的数组
declare -A tmp
tmp=( \
[vid]='vid.tmp' \
[visms]='visms.tmp' \
[vmms]='vmms.tmp' \
[vim]='vim.tmp' \
[vimm]='vimm.tmp' \
[vi]='vi.tmp' \
[vig]='vig.tmp' \
[vlte]='vlte.tmp' \
[vgg]='vgg.tmp' 
)



