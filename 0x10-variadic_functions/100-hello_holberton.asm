; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.

section .text
	global	main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 17
	syscall

section .rodata
	msg: db "Hello, Holberton", 0xa
	len: equ $ - msg
