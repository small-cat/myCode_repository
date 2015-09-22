assume cs:code,ds:data
data segment
	dd 10000000
	dw 100
	data ends
result segment
	db 16 dup (0)
	result ends
code segment
	start:  mov ax,data
			mov ds,ax
			mov ax,result
			mov ss,ax
			
			mov si,0
			mov ax,[si]
			mov dx,[si+2]
			mov cx,[si+4]
			call my_div
			
			mov bp,0
			mov [bp],ax
			mov [bp+2],dx
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
			
code ends
end start
