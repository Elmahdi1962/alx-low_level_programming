section .data
    msg db "Hello, Holberton", 10
    len equ $-msg
section .text
    global main
main:
    mov rax,1           ;system call number (sys_write)
    mov rdi,1           ;file descriptor (stdout)
    mov rsi,msg         ;string arg
    mov rdx,len         ;length of string arg
    syscall             ;call kernel

    mov rax,60          ;system call number (sys_exit)
    xor rdi,rdi         ;clear destination index register
    syscall             ;call kernel
end:
