assume cs:code
code segment
START: mov ax,cs
       mov ds,ax

       mov bx,0
       mov ax,0020h
       mov es,ax

       mov dx,cx
       sub dx,5
       mov cx,dx

    S: mov al,[bx]
       mov es:[bx],al
       inc bx
       loop S

       mov ax,4c00h
       int 21h
code ends
end START
