.model small
.stack 100

dispm macro msg
mov dx,offset msg
mov ah,09h
int 21h
endm

.data
string db "hello$"
msg1 db "given string is palindrome$"
msg2 db "given string is not palindrome$"

.code
mov ax,@data
mov ds,ax
mov si,offset string

loop1:mov ax,[si]
cmp al,"$"
je label1
inc si
jmp loop1

label1:mov di,offset string
dec si

loop2:cmp si,di
jl output1
mov ax,[si]
mov bx,[di]
cmp al,bl
jne output2

dec si
inc di
jmp loop2

output1:dispm msg1
jmp exit

output2:dispm msg2
jmp exit

exit:mov ah,4ch
int 21h
end
