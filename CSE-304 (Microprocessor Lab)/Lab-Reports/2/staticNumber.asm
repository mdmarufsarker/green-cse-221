; calculate product of 2 and 4 and print the result on the screen

.model small
.stack 100h
.data
    n1 db 2
    n2 db 4
    result db ?

.code
main proc
    ; initialize data segment
    mov ax, @data
    mov ds, ax

    ; assign n1 and convert to int
    mov ah, 2   ; 2 = print character
    add n1, 48  ; convert n1 to int
    mov dl, n1  ; move n1 to dl
    int 21h

    ; print * sign
    mov dl, '*' ; move * to dl
    mov ah, 2   ; 2 = print character

    ; assign n1 and convert to int
    mov ah, 2   ; 2 = print character
    add n2, 48  ; convert n2 to int
    mov dl, n2  ; move n2 to dl
    int 21h

    ; print = sign
    mov dl, '=' ; move = to dl
    mov ah, 2   ; 2 = print character
    int 21h

    ; calculate product
    mov al, n1  ; move n1 to al
    mul n2      ; multiply al by n2
    mov result, al  ; move result to al

    ; print result
    mov dl, result  ; move result to dl
    add dl, 48      ; convert result to int
    mov ah, 2       ; 2 = print character
    int 21h

    ; exit
    mov ah, 4ch
    int 21h
main endp
end main

