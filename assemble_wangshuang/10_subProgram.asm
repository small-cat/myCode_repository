assume cs:code,ds:data
data segment
	db 'Welcome to masm',0
	data ends
code segment
	start: mov dh,8	;第8行
		   mov dl,3	;第3列
		   mov cl,72h	;green
		   
		   mov ax,data
		   mov ds,ax
		   mov si,0
		   call show_str
		   
		   mov ah,4ch
		   int 21h
		   
show_str:  mov ax,0b800h
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
	show:  push cx		;保存cl
		   mov cl,[si]
		   mov ch,0
		   jcxz ok		;判断是否是最后一个字节0
		   pop cx	   
		   mov al,[si]
		   mov ah,cl
		   mov es:[bx+di],ax
		   inc si
		   add di,2
		   jmp show
	ok:	   pop cx
		   ret
code ends
end start
		   
