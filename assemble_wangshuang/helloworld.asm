datas segment
      STRING DB 'Hello World!',13,10,'$'
datas ends

codes segment
assume cs:codes,ds:datas
START:
      mov ax,datas
      mov ds,ax
      lea dx,STRING
      mov ax,09h
      int 21h

      mov ax,4c00h
      int 21h
codes ends
end START
