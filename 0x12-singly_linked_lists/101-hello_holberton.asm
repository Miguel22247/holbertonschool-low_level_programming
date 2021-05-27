section .data
hello:		db "Hello, Holberton",10,0
format:		db "%s",0

	    section .text
	    global main
	    extern printf

main:
	    push rbp
	    mov rbp, rsp

	    mov rsi, hello
	    mov rdi, format
	    call printf

	    pop rbp
	    mov rax, 0
	    ret
