ASSUME cs:codesg

codesg  SEGMENT
    start:mov ax,0123h
    mov ds:[0],ax
    jmp word ptr ds:[0]

    mov ax,0123h
    mov [bx],ax
    jmp word ptr [bx]

    mov ax,0123h
    mov ds:[0],ax
    mov word ptr ds:[2],0
    jmp dword ptr ds:[0]

    mov ax,0123h
    mov [bx],ax
    mov word ptr [bx+2],0
    jmp dword ptr [bx]


    
    mov cx,ds:[bx]
    jcxz short ok
    inc bx

codesg ends

end start 

