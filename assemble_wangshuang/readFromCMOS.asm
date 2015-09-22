assume cs:code
code segment
start:	mov al,9
		out 70h,al
		in al,71h
		
;		mov ah,al
		mov cl,4
		shr ah,cl
		and al,0fh
		add al,30h
		add ah,30h
		
		mov bx,0b800h
		mov es,bx
		mov es:[160*12+8*4],ah
		mov es:[160*12+8*4+2],al
		
		mov ax,4c00h
		int 21h
code ends
end start


