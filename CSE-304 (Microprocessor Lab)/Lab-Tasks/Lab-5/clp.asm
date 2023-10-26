INCLUDE 'emu8086.inc'
.MODEL SMALL 
.STACK 100H  

.DATA
    ID DB '221002063 $'
    ;NUM1 DB ?
	;NUM2 DB ?

.CODE 
 MAIN PROC
    MOV AX,@DATA
    MOV DS ,AX
    
    PRINTN 'CONTINIOUS LAB PERFORMANCE'
    ; PRINT MY STUDENT ID
    ; USER INPUT - 2 NUMBERS
    ; COMPARE THOSE NUMBERS
    ; SINCE MY ID IS ODD I HAVE TO PROVE N1 < N2 ? IF YES THEN PRINT SMALLER NUMBER
    ; IF SOMEONES ID IS EVEN THEN HE/SHE HAVE TO PROVE N1 > N2 ? IF YES THEN PRINT GREATER NUMBER
    
    ; first input
    mov ah, 1   ; function 1, read char from keyboard
    int 21h     ; call DOS
    mov bl, al  ; save char in bl

    ; second input
    mov ah, 1   ; function 1, read char from keyboard
    int 21h     ; call DOS
    mov bh, al  ; save char in bh
     
    CMP bl, bh
    JL LESS ; (JL) JUMP LESS
    JMP LESS
    
    LESS:
        PRINTN 'SMALLER NUMBER'
    
     MOV AH,4CH
     INT 21H
     MAIN ENDP
 END MAIN
    
