assume cs:code

code segment
    mov ax,0ffffH
    mov ds,ax

    mov ax,0020h
    mov es,ax

    mov bx,0
    mov cx,3

    s:  mov al,[bx]
        mov es:[bx],al
        inc bx
    loop s

    mov ax,004h
    int 21h

code ends
end