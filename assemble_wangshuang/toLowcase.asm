assume cs:code,ds:data
data segment
	db "Beginner's All-purpose Symbolic Instruction code.",'$'
	data ends
code segment
start:	mov ah,2
		mov bh,0
		mov dh,5
		mov dl,12
		int 10h
		
		mov ax,data
		mov ds,ax
		mov si,0
		call letterc
		
		mov dx,0
		mov ah,9
		int 21h
		
		mov ax,4c00h
		int 21h
		
letterc:mov cl,[si]
		mov ch,0
		jcxz return
		mov al,[si]
		cmp al,60h	;ASC表中A之前的一个字符
		jna s1		;说明是大写,只有当时小写字母时才会转换成大写
		and al,0dfh
		mov [si],al
s1:		inc si
		jmp letterc
return:	ret

code ends
end start
		





