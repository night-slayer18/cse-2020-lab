.model small
.stack 64

.data
msg1 db 0ah,"enter number $"
msg2 db 0ah,"sum is:$"
num db ?

.code
mov ax,@data
mov ds,ax

mov dx,offset msg1
mov ah,09h
int 21h

mov ah,01h
int 21h
sub al,30h
mov num,al

mov dx,offset msg1
mov ah,09h
int 21h

mov ah,01h
int 21h
sub al,30h
add al,num
mov num,al

mov dx,offset msg2
mov ah,09h
int 21h

mov al,num
add al,30h
mov dl,al
mov ah,02h
int 21h

mov ah,4ch
int 21h

end
