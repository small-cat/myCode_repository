assume cs:code,ds:data,es:table

data segment

    db '1975','1976','1977','1978','1979','1980','1981','1982','1983'

    db '1984','1985','1986','1987','1988','1989','1990','1991','1992'

    db '1993','1994','1995'
    ;21 years

    dd 16,22,382,1356,2390,8000,16000,24486,50065,97479,140417,197514

    dd 345980,590827,803530,1183000,1843000,2759000,3753000,4649000,5937000
    ;21 年的收入

    dw 3,7,9,13,28,38,130,220,476,778,1001,1442,2258,2793,4037,5635,8226

    dw 11452,14430,15257,17800
    ;21 年员工数量
data ends

table segment
	db 21 dup ('year summ ne ?? ',0)
table ends

code segment
START:  mov ax,data
		mov ds,ax
		mov ax,table
		mov ss,ax
		mov dh,6	;第8行
		mov dl,3	;第3列
;		mov cl,72h	;green
		
		;保存年份
		mov bx,0
		mov si,0
		mov bp,0
		mov cx,21
		
s1:		mov ax,[bx][si]
		mov [bp+0],ax
		;年份为四个字节的字符串，分两次读取
		add si,2
		mov ax,[bx][si]
		mov [bp+2],ax
		add bp,10h
		;将table转到下一行
		add si,2
		loop s1
		
		;保存收入 dd
		mov cx,21
		mov si,0
		mov bp,0
		mov bx,0
		
s2:		mov ax,84[bx][si]
		mov [bp+5],ax
		;收入为dd类型，为四个字节，分两次读取
		add si,2
		mov ax,84[bx][si]
		mov [bp+7],ax
		add bp,10h
		add si,2
		loop s2
		
		;保存人数 dw
		mov cx,21
		mov bp,0
		mov si,0
		mov bx,0
		
s3:		mov ax,168[bx][si]
		mov [bp+10],ax
		add si,2
		add bp,10h
		loop s3
		
		;计算每年的人均收入
		mov bp,0
		mov cx,21
		push dx
		
s4:		push cx
		mov ax,[bp+5]
		mov dx,[bp+7]
		mov cx,[bp+10]
		call my_div
		mov [bp+13],ax
		add bp,10h
		pop cx
		loop s4
		
		mov bp,0
		mov cx,21
s6:		push cx
		mov ax,[bp+5]
		mov dx,[bp+7]
		mov si,0
		mov di,0
transfer:	mov cx,10
		call my_div		;除数为10，cx中的余数最大为9，去cl中的数
		inc di			;记录数据的位数，按照十进制计算
		add cl,30h
		push cx			;将余数入栈，出栈顺序即为原数据的顺序 
				;在子程序中，push就必须pop，不然在ret的时候，ip指针会被覆盖，函数跳转到其他位置，导致错误
		push ax
		or ax,dx
		mov cx,ax
		pop ax
		jcxz return
		jmp transfer
return:	mov cx,di
		mov si,0
		mov [bp+si+4],20h
itoa:	pop ax	;将字符串写回原来的内存
;		mov [bp+si+4],20h	;年份与收入之间空一格
		mov [bp+si+5],al	
		inc si
		loop itoa
		mov [bp+si+5],0		;将字符串最后一格设置为0，然后可利用jcxz
		pop cx
		add bp,10h
		loop s6
		
		
		pop dx
		mov bp,0
		mov cx,21
s5: 	call show_str
		add bp,10h
		inc dh
		loop s5
		
		mov ax,4c00h
		int 21h
		
my_div:		push ax
			mov ax,dx	;ax=0,dx,(h/n)*65536
			mov dx,0
			div cx		;ax为商，dx为余数
			mov bx,dx	;用bx保存一下高位除后的余数
			mov dx,ax
			pop ax
			push dx		;dx保存的int(h/n)*65536
			mov dx,bx	;(rem(h/n)*65536+L)/n	乘以65536就相当于放在高16中
			div cx		;ax为商，dx为余数，将余数保存在cx中
			mov cx,dx
			pop dx
			ret
		
show_str:  push bx
		   push si
		   push cx
		   push dx
		   mov ax,0b800h
		   mov es,ax
		   sub dh,1
		   mov al,0a0h
		   mul byte ptr dh	;计算第八列，即加上前面七列，160*7
		   push ax
		   xor ax,ax
		   sub dl,1
		   mov al,2
		   mul byte ptr dl
		   pop bx
		   add bx,ax	;计算第8行第3列
		   mov di,0
		   mov si,0
;		   mov cx,9
	show:  mov cl,[bp][si]
		   mov ch,0
		   mov al,[bp][si]
		   mov ah,72h	;green
		   mov es:[bx+di],ax
		   inc si
		   add di,2
		   jcxz ok
		   jmp show
ok:		   pop dx
		   pop cx
		   pop si
		   pop bx
		   ret

		
code ends
end START











