ASSUME cs:codesg,ds:datasg
datasg SEGMENT
    db 8,11,8,1,8,5,63,38
datasg ends

codesg SEGMENT
    start:  mov ax,datasg
            mov ds,ax
            mov bx,0
            mov ax,0

            mov cx,8

   s:      cmp byte ptr [bx],8
           je ok
           jne next

  ok:     inc ax
  
  next:   inc bx
          loop s

codesg ends

end start