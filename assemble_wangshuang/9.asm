assume cs:code,ds:data

data segment

     db 'welcome to masm!'

data ends

code segment

start:   mov ax,data

     mov ds,ax

     mov bx,0               ;ds:bx指向data字符串

     mov ax,0b800h

     mov es,ax

     mov si,0               ;es:si指向显存

     mov cx,16

s:   mov al,[bx]            ;字符赋值al

     mov ah,02h             ;绿色

     mov es:[si].720h,ax    ;写入第12行64列

     mov ah,14h             ;绿底红色

     mov es:[si].7c0h,ax    ;写入第13行64列

     mov ah,71h             ;白底蓝色

     mov es:[si].860h,ax    ;写入第14行64列

     inc bx                 ;指向下一字符

     add si,2               ;指向下一显存单元

     loop s

     mov ax,4c00h

     int 21h

code ends

end start

