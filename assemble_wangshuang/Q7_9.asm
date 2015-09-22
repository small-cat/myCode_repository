assume cs:codesg,ss:stacksg,ds:datasg
stacksg segment
  dw 0,0,0,0,0,0,0,0
stacksg ends

datasg segment
  db '1. display      '
  db '2. brows        '
  db '3. replace      '
  db '4. modify       '
datasg ends

codesg segment
start: mov ax,datasg
       mov ds,ax
       mov cx,4

       mov ax,stacksg ;initial stack
       mov ss,ax
       mov sp,10h
       mov si,0

   S1: push cx
       mov cx,4
       mov bx,0

   S2: mov al,3[si][bx]
       and al,0dfh
       mov 3[si][bx],al
       inc bx
       loop S2

       pop cx
       add si,10h
       loop S1

       mov ax,4c00h
       int 21h

codesg ends
end start
