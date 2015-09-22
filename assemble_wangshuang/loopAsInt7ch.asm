assume cs:code
code segment
start:	mov ax,cs
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
		
		;使用int 7ch
		mov ax,0b800h
		mov es,ax
		mov di,160*12+12*4
		
		mov bx,offset s-offset se
		mov cx,80
	s:	mov byte ptr es:[di],'!'
		add di,2
		int 7ch		;pushf, push cs, push ip
	se:	nop
		
		mov ax,4c00h
		int 21h

;中断例程		
AsLoop:	;bx传入转移位移
		push bp
		mov bp,sp
		dec cx
		jcxz AsLoopret
		add [bp+2],bx
AsLoopret:pop bp
		  iret	;pop ip, pop cs, popf
		  
		  mov ax,4c00h
		  int 21h
AsLoopEnd:nop

code ends
end start


