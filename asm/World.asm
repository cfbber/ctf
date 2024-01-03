ASSUME cs:love

love SEGMENT
    MOV ax,0123
    mov bx,0456
    add ax,bx

    mov ax,4c00
    int 21
love ENDS

END