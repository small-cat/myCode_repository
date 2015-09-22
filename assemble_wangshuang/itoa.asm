assume cs:code
data segment
	dd 123456
	;db 'Welcome to masm!','$'
	data ends
result segment
	db 16 dup (0)
	result ends
code segment
start:	;mov ax,data
		;mov ds,ax
		;call itoa	;通过ds传入参数，将int值转换成字符保存在result中
		mov ah,2
		mov bh,0
		mov dh,5
		mov dl,12
		int 10h		
		mov ax,data
		mov ds,ax
		mov ax,result
		mov ss,ax
		
		call itoa
		mov ax,result
		mov ds,ax
		mov si,0
		mov cx,di
s1:		mov al,[si]
		push ax
		inc si
		loop s1

		mov cx,di
s2:		pop ax
		mov [si+2],al
		inc si
		loop s2
		mov [si+2],24h
		
;		mov dx,8
		mov dx,0
		mov ah,9
		int 21h
		
		mov ah,4ch
		int 21h
		
itoa:	mov si,0
		mov bp,0
		mov ax,[si]
		mov dx,[si+2]
transfer:	mov cx,10
		call my_div		;除数为10，cx中的余数最大为9，去cl中的数
		inc di			;记录数据的位数，按照十进制计算
		mov [bp][si],cl
;		push cx				;将余数入栈，出栈顺序即为原数据的顺序 
							;在子程序中，push就必须pop，不然在ret的时候，ip指针会被覆盖，函数跳转到其他位置，导致错误
		add [bp][si],30h	;加30h,转换成数字字符
		inc si			;记录了该十进制数的位数
		push ax
		or ax,dx
		mov cx,ax
		pop ax
		jcxz return
		jmp transfer
return:	;mov [bp][si],24h	;字符'$'
		ret
		
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
		
code ends
end start
		
		
		
		



