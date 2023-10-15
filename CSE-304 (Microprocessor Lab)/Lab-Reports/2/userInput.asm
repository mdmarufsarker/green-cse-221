.model small
.stack 100h
.data
    n1 db ?
    n2 db ?
    result db ?

.code
main proc
    ; initialize data segment
    mov ax, @data
    mov ds, ax

    ; read n1
    mov ah, 1   ; 1 = read character
    int 21h
    mov n1, al  ; save the character in n1

    ; read n2
    mov ah, 1   ; 1 = read character
    int 21h
    mov n2, al  ; save the character in n2

    ; print new line
    mov ah, 2   ; 2 = print character
    mov dl, 10  ; 10 = new line
    int 21h
    mov dl, 13  ; 13 = carriage return
    int 21h

    ; print n1
    mov dl, n1  ; move n1 to dl
    mov ah, 2   ; 2 = print character
    int 21h

    ; print * sign
    mov dl, '*' ; move * to dl
    mov ah, 2   ; 2 = print character
    int 21h

    ; print n2
    mov dl, n2  ; move n2 to dl
    mov ah, 2   ; 2 = print character
    int 21h

    ; print = sign
    mov dl, '=' ; move = to dl
    mov ah, 2   ; 2 = print character
    int 21h

    ; convert n1, n2 to numbers
    sub n1, 30h ; convert n1 to number
    sub n2, 30h ; convert n2 to number

    ; calculate result
    mov al, n1  ; move n1 to al
    mul n2      ; multiply al with n2
    mov result, al  ; save the result in result

    ; convert result to character
    add result, 30h ; convert result to character

    ; print result
    mov dl, result  ; move result to dl
    mov ah, 2       ; 2 = print character
    int 21h

    ; exit
    mov ah, 4ch
    int 21h
main endp
end main
