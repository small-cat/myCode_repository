assume cs:code
code segment
start:	mov ax,cs
		mov ds,ax
		mov si,offset do0
		mov ax,0
		mov es,ax
		mov di,200h
		mov cx,offset do0end-offset do0
		cld
		rep movsb
		
		mov ax,0
		mov es,ax
		mov word ptr es:[7ch*4],200h
		mov word ptr es:[7ch*4+2],0
		
		int 7ch
		
		mov ax,4c00h
		int 21h
		
		;ÏÔÊ¾I want to change the world!,27¸ö
do0:	jmp short do0start
		db 'I want to change the world!'
		
do0start:	mov ax,cs
			mov ds,ax
			mov si,202h
			
			mov ax,0b800h
			mov es,ax
			mov di,12*160+12*2
			
			mov cx,27
	s:		mov al,[si]
			mov es:[di],al
			inc si
			add di,2
			loop s
			
			mov ax,4c00h
			int 21h
			
do0end:		nop
code ends
end start	




