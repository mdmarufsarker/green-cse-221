INCLUDE 'EMU8086.INC'

.MODEL SMALL
.DATA  
    ZERO DW 0
.CODE

MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

    PRINT 'ENTER A NUMBER: '
    CALL SCAN_NUM
    MOV AX, CX
    PRINTN ''
    PRINT 'ENTER THE DIVISION: '
    CALL SCAN_NUM
    DIV CX
   
    PRINTN ''
    PRINT 'RESULT: '
    CALL PRINT_NUM
    PRINT '.'    
    
    REM:
        MOV AX, DX
        ;CALL PRINT_NUM   
        MOV BX, 10
        MUL BX
        DIV CX
        CALL PRINT_NUM
        CMP ZERO, DX
        JNE REM

    EXIT:
	MOV AH, 4CH
	INT 21H

MAIN ENDP

DEFINE_SCAN_NUM
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS
DEFINE_GET_STRING
