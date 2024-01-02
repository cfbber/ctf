assume cs:code
assume ds:data

data segment
    arr1 DB 1,2,3,4,5
data ends

code segment
  start:
    mov ax,data
    mov ds,ax

    mov bx,0
    mov cx,3

    mov si,0

    s: mov ax,arr1:si
       inc si    
    loop s

    mov ax,4C00H
    int 21h

code ends
end start




