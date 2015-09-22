assume cs:code
code segment
	start: mov ax,0
		   call far ptr s
		   inc ax
		s: pop ax
		   add ax,ax
		   pop bx
		   add ax,bx
		   
		   mov ah,4ch
		   int 21h
code ends
end start
