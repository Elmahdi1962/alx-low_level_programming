section .data
	msg db 'Hello, Holberton', 0xa
	len equ $ - msg
	n_line DB 0AH,0DH,"$"   ;for new line

section .text
	global main

main:
	mov edx, len
	mov ecx, msg     ;message to write
	mov ebx, 1 ;file descriptor (stdout)
	mov eax, 4 ;system call number (sys_write)
	int 0x80 ;call kernel
	mov eax, 1 ;system call number (sys_exit)
	int 0x80 ;call kernel
