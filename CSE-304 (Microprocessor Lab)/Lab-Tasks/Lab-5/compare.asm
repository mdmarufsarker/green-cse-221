INCLUDE 'emu8086.inc'
.MODEL SMALL 
.STACK 100H  

.DATA

.CODE 
 MAIN PROC
    MOV AX,@DATA
    MOV DS ,AX
    
    PRINTN 'THIS IS AN EXAMPLE OF UNCONDITIONAL JUMP'
     
    MOV AX, 10
    MOV BX, 20
    CMP AX, BX
    JL LEVEL2 ; JUMP LESS
    JMP LEVEL2
    
    LEVEL1:
        PRINTN 'THIS IS LELEL 1'
        JMP ENDOFFILE
    LEVEL2:
        PRINTN 'THIS IS LEVEL 2'
        JMP LEVEL1
        
    ENDOFFILE:
        PRINTN 'THE END SECTION'
    
     MOV AH,4CH
     INT 21H
     MAIN ENDP
 END MAIN
    
