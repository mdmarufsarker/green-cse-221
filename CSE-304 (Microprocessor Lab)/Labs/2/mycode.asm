.MODEL SMALL

.STACK 100H

.DATA
    V1 DB 10
    V2 DW 10000
    MSG DB 'Hello World!$'
    
.CODE
    MAIN PROC
        MOV AX, @DATA
        MOV DS, AX
        
        LEA DX, MSG
        MOV AH, 09H
        INT 21H
         
        MOV AH, 01H
        INT 21H
        MOV BH, AL
        INT 21H
        MOV BL, AL
        INT 21H
        MOV CH, AL
        INT 21H
        MOV       
               
        MOV AH, 01H
        INT 21H
        MOV BL, AL
        
        MOV AH, 02
        MOV DL, 0DH
        INT 21H
        MOV DL, 0AH
        INT 21H
        
        MOV DL, BL
        MOV AH, 02H
        INT 21H
    
    MAIN ENDP
END MAIN