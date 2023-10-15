.model small
.stack 100h

.data
    msg db 0ah, 0dh, 'Enter a string: $'
    msg2 db 0ah, 0dh, 'Modified string: $'
    str db 21 dup('$')
    str2 db 21 dup('$')
    len db 0
    i db 0

.code
main proc
    mov ax, @data
    mov ds, ax

    mov ah, 9
    lea dx, msg
    int 21h

    mov ah, 0ah
    lea dx, str
    int 21h

    mov ah, 9
    lea dx, msg2
    int 21h

    mov cl, len
    mov ch, 0
    mov si, 0
    mov di, 0
    mov ah, 0
    mov al, 0
    mov bl, 0
    mov bh, 0
    mov dl, 0
    mov dh, 0

    loop1:
        mov al, str[si]
        cmp al, 0dh
        je loop1_end
        cmp al, 0ah
        je loop1_end
        mov str2[di], al
        inc si
        inc di
        inc len
        jmp loop1

    loop1_end:
        mov al, str[si]
        mov str2[di], al

    loop2:
        mov al, str2[i]
        cmp al, 0dh
        je loop2_end
        cmp al, 0ah
        je loop2_end
        cmp al, '0'
        je loop2_0
        cmp al, '1'
        je loop2_1
        cmp al, '2'
        je loop2_2
        cmp al, '3'
        je loop2_3
        cmp al, '4'
        je loop2_4
        cmp al, '5'
        je loop2_5
        cmp al, '6'
        je loop2_6
        cmp al, '7'
        je loop2_7
        cmp al, '8'
        je loop2_8
        cmp al, '9'
        je loop2_9
        jmp loop2_inc

    loop2_0:
        mov str2[i], '0'
        jmp loop2_inc

    loop2_1:
        mov str2[i], '1'
        jmp loop2_inc

    loop2_2:
        mov str2[i], '2'
        jmp loop2_inc

    loop2_3:
        mov str2[i], '3'
        jmp loop2_inc

    loop2_4:
        mov str2[i], '4'
        jmp loop2_inc

    loop2_5:
        mov str2[i], '5'
        jmp loop2_inc

    loop2_6:
        mov str2[i], '6'
        jmp loop2_inc

    loop2_7:
        mov str2[i], '7'
        jmp loop2_inc

    loop2_8:
        mov str2[i], '8'
        jmp loop2_inc

    loop2_9:
        mov str2[i], '9'
        jmp loop2_inc

    loop2_inc:
        inc i
        jmp loop2

    loop2_end:
        mov ah, 9
        lea dx, str2
        int 21h

    mov ah, 4ch
    int 21h
main endp
end main