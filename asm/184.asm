ASSUME cs:codesg,ds:datasg

datasg SEGMENT
    dd 100001
    dw 100
    dw 0
datasg ends

codesg SEGMENT
 start: mov ax,datasg
    mov ds,ax
    mov ax,ds:[0]
    mov dx,ds:[2]

    div word ptr ds:[4]
    mov ds:[6],ax
codesg ends

end start