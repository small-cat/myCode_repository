assume cs:code,ds:data
data segment
	db 'I want to change the world!',0
	data ends
code segment
start:	;安装中断例程
		mov ax,cs
		mov ds,ax
		mov si,offset AsLoop
		mov ax,0
		mov es,ax
		mov di,200h
		mov cx,offset AsLoopEnd-offset AsLoop
		cld
		rep movsb
		
		;设置中断向量
		mov ax,0
		mov es,ax
		mov es:[7ch*4],200h
		mov es:[7ch*4+2],0
		
		;使用中断向量7ch，即用户程序
		mov ax,data
		mov ds,ax
		mov si,0
		mov ax,0b800h
		mov es,ax
		mov di,160*12+12*4
		mov bx,offset s-offset se
	s:	cmp byte ptr [si],0
		je ok
		mov al,[si]
		mov ah,72h
		mov es:[di],ax
		inc si
		add di,2
		int 7ch		;使用自定义的中断程序
	se: nop
	ok:	mov ax,4c00h
		int 21h
		
		;中断例程,bx传入转移位移,该中断模拟jmp near s跳转的功能
AsLoop:	push bp
		mov bp,sp
		add [bp+2],bx
		pop bp
		iret
		
		mov ax,4c00h
		int 21h
AsLoopEnd: nop
code ends
end start




