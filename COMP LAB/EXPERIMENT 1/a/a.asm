ASSUME CS: CODE, DS: DATA 
DATA SEGMENT 
NUM_B DB 30H 
NUM_C DB 20H 
NUM_D DB 08H 
NUM_E DB 05H 
DATA ENDS 
CODE SEGMENT 
START: 
MOV AX, DATA 
MOV DS, AX 
MOV AX, 0000H 
MOV BX, 0000H 
XOR CX, CX 
XOR DX,DX 
MOV AL, NUM_B 
MOV BL, NUM_C 
ADD AL, BL 
MOV CX, AX 
MOV AL, NUM_D 
MOV DL, NUM_E 
MUL DL 
SUB CL, AL 
INT 03H 
CODE ENDS 
END START