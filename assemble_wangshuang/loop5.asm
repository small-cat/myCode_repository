assume cs:codesg,ds:datasg
datasg segment
   db 'ibm             '
   db 'dec             '
   db 'dos             '
datasg ends

codesg segment
START: mov ax,datasg
       mov ds,ax
       mov si,0
       mov cx,3

   S1: mov dx,cx
       mov cx,3
       mov bx,0

   S2: mov al,[si][bx]
       and al,0dfh
       mov [si][bx],al
       inc bx
       loop S2

       mov cx,dx
       add si,10H
       loop S1

       mov ax,4c00h
       int 21h
codesg ends
end START
