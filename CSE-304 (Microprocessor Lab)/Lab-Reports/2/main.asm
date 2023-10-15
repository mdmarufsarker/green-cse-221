.model small
.stack 100h
.data
    msg1 db 10,13,"Enter first number : $"
    msg2 db 10,13,"Enter second number : $"
    msg3 db 10,13,"Result : $"
    num1 db ?
    num2 db ?
    prod1 db ?

.code
main proc
    ; user input part
    mov ax,@data
    mov ds,ax

    mov ah,09h
    lea dx,msg1
    int 21h

    mov ah,01h
    int 21h

    sub al,30h
    mov num1,al

    mov ah,09h
    lea dx,msg2
    int 21h

    mov ah,01h
    int 21h

    sub al,30h
    mov num2,al

    ; multiplication part
    mov al,num1
    mul num2
    mov prod1,al

    ; display part
    mov ah,09h
    lea dx,msg3
    int 21h

    mov dl,prod1
    add dl,30h
    mov ah,02h
    int 21h

    mov ah,4ch
    int 21h
main endp
end main