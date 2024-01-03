ASSUME cs:codesg,ds:datasg,ss:stacksg

datasg SEGMENT
    db 'ibm1234567890123'
    db 'dec1234567890123'
    db 'dos1234567890123'
    db 'vas1234567890123'

datasg ENDS


stacksg SEGMENT
    dw 0,0,0,0,0,0,0,0
stacksg ENDS

codesg SEGMENT
    start:mov ax,stacksg
          mov ss,ax
          mov sp,16;只用到一位，可以设置为2

          mov ax,datasg
          mov ds,ax

          mov bx,0
          mov cx,4
      s0: push cx
          mov si,0 ;偏移每一
          mov cx,3
      s:  mov al,[bx+si]
          and al,11011111b
          mov [bx+si],al
          inc si
          loop s   

          add bx,16
          pop cx
          loop s0

          mov ax,4c00H
          int 21h

codesg ENDS

end start