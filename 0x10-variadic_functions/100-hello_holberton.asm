section		.text
	global	main

main:
	ov		edx,len	;pass length
	mov		ecx,msg	;pass message
	mov		ebx,1	;pass stdout
	mov		eax,4	;pass call number for sys_write
	int		0x80	;call kernel

	section		.data
	msg	db 'Hello, Holberton',0xa
	len equ $ - msg
