.model small
.stack 100h

.data
    my_name db "Muhammad Maruf Sarker $"
    id db 10, 13, "221002063 $"

    msg db 10, 13, "Output: $"

.code
main proc
    mov ax, @data
    mov ds, ax

    ; print name
    mov ah, 9
    lea dx, my_name
    int 21h

    ; print id
    mov ah, 9
    lea dx, id
    int 21h

    ; print msg
    mov ah, 9
    lea dx, msg
    int 21h

    ; perform the operation
    ; brute force approach
    mov si, 11
    mov msg[si], 00
    mov si, 12
    mov msg[si], 00
    mov si, 13
    mov msg[si], 00
    mov si, 14
    mov msg[si], 00

    mov ah, 4ch
    int 21h
main endp
end main