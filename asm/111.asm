assume cs:code


    code segment

   start: mov ax,0ffffh
          mov ds,ax
          mov bx,6

          mov al,[bx]
          mov ah,0

          mov dx,0

          mov cx,3
          s: add dx,ax
            loop s

    code ends;
    end start
end