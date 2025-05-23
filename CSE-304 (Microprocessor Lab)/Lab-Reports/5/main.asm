INCLUDE 'EMU8086.INC'
.MODEL SMALL
.STACK 100H

.DATA
    N DW ?
    E_SUM DW 0
    O_SUM DW 0

.CODE
; MACRO USED FOR PASSING ARGUMENTS TO A PROCEDURE/FUNCTION

RANGE MACRO N
    PRINT 'ENTER THE RANGE VALUE: '
    CALL SCAN_NUM
    MOV N, CX
ENDM

MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

    RANGE N
    CALL EVEN_SUM
    CALL ODD_SUM

    EXIT:
    MOV AH, 4CH
    INT 21H
MAIN ENDP

EVEN_SUM PROC
    MOV AX, N
    PRINTN ''

    START:
        ; IF N = 5, THEN LOOP WILL RUN 3 TIMES
        ; 4 + 2 + 0 = 6
        ; IF N = 6, THEN LOOP WILL RUN 4 TIMES
        ; 6 + 4 + 2 + 0 = 12

        ; IF N IS EVEN THEN PROCEED OTHERWISE DECREMENT N BY 1
        CMP N, 0
        JE ENDOFCODE
        CMP N, 1
        JE ENDOFCODE

        CMP AX, 0
        JE ENDOFCODE

        ADD E_SUM, AX
        CALL PRINT_NUM
        PRINT ' + '

        LOOP START

    ENDOFCODE:
        PRINTN ''
        PRINT 'EVEN SUM = '
        MOV AX, E_SUM
        CALL PRINT_NUM

    RET
EVEN_SUM ENDP

ODD_SUM PROC
    MOV AX, N
    PRINTN ''
    
    RET
ODD_SUM ENDP

DEFINE_SCAN_NUM
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS
END MAIN
