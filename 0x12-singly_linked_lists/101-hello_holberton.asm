section .text
	global main
	extern printf
	default rel
main:
	push rbp
	mov rdi, specs
	mov rsi, str
	mov rax, 0
	call printf
	
	pop rbp
	mov rax, 0
	ret

section .data
	specs: db "%s", 0
	str: db "Hello, Holberton", 10, 0
