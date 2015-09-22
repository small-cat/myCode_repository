assume cs:code,ds:data
data segment
	table db '0123456789abcdef'
data ends
code segment
start:	mov ax,data
		mov ds,ax
		
		mov al,3ah
		mov ah,al
		mov cl,4
		shr ah,cl
		and al,0fh
		
		mov bx,0b800h
		mov es,bx
		mov bh,0
		mov bl,ah
		mov ah,table[bx]
		mov bl,al
		mov al,table[bx]
		mov es:[160*12+32],ah
		mov es:[160*12+32+2],al
			
		mov ax,4c00h
		int 21h
		
code ends
end start
