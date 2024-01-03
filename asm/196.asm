ASSUME cs:codesg

codesg SEGMENT
    start:mov ax,1
          mov cx,3
          call s
          mov bx,ax
          sub ax,1

          mov ax,4c00H
          int 21h
        s: add ax,ax
          loop s
          ret  

codesg ends

end start