DATAS SEGMENT
    db 'welcome to masm',0  
DATAS ENDS

CODES SEGMENT
    ASSUME CS:CODES,DS:DATAS
START:
    MOV AX,DATAS
    MOV DS,AX
    
    mov ax,0b800h
    mov es,ax
    
    mov bh,0c2h
    mov si,0
    mov di,0
 s: mov cl,[si]
 	mov ch,0
 	jcxz ok
 	mov bl,[si]
 	mov es:[di],bx
 	inc si
 	add di,2
 	jmp s

 	    
ok: MOV AH,4CH
    INT 21H
CODES ENDS
    END START

