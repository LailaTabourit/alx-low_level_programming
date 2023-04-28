section .data
	msg db 'Hello, Holberton', 10, 0

section .text
	global main
	extern printf

main:
	mov edi, msg
	xor eax, eax
	call printf
	xor eax,eax
	ret
