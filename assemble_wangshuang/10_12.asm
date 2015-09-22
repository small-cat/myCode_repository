assume cs:code
data segment
	db 'word',0
	db 'unix',0
	db 'wind',0
	db 'world',0
	data ends
	
code segment
	start: mov ax,data
		   mov ds,ax
		   mov si,0
		   mov cx,4
		   mov bx,0	;记录字符串的长度
		   
      s:   mov si,bx
		   call capital
		   loop s
		   mov ah,4ch
	 	   int 21h
		   
capital:   push si
		   push cx
		   
 change:   mov cl,[si]
		   mov ch,0
		   inc bx		;当cx为0时，将bx加2到下一个字符串的位置
		   jcxz ok
		   and byte ptr [si],0dfh
		   inc si
		   jmp short change	
	 ok:   pop cx
	 	   pop si
	 	   ret
code ends
end start
