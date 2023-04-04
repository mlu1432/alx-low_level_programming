section .data
    hello db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [hello]
    xor eax, eax
    call printf

    mov eax, 0
    pop rbp
    ret
