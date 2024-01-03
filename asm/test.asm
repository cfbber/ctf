ASSUME cs:codesg

codesg SEGMENT
    start: mov ax,2
           sub ax,1
           sub ax,1

           add ax,1
           sub ax,1
           add ax,1

            mov ax,4c00H
            int 21h

codesg ends

end start