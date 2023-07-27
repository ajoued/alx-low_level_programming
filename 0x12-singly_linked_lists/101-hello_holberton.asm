section .data
    hello db "Hello, Holberton", 0   ; Null-terminated string

section .text
    global main

extern printf                   ; Declare the external printf function

main:
    ; Call printf to print the string
    mov rdi, hello               ; 1st argument: pointer to the format string
    call printf                  ; Call printf function

    ; Exit the program
    mov eax, 0                   ; Return 0 from the main function
    ret
