CODES SEGMENT
    ASSUME CS:CODES
START:
    MOV AX,0ffffh
    MOV DS,AX
    ;此处输入代码段代码
    
    MOV BX,0
    MOV CX,12
    MOV DX,0
    
s:  MOV AL,[BX]
	MOV AH,0
	ADD DX,AX
	INC BX
	LOOP S
    
    MOV AH,4CH
    INT 21H
CODES ENDS
    END START
