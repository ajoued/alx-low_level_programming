section .data
    format db "Hello, Holberton", 0   ; Null-terminated string

section .text
    global main

    extern printf               ; Declare the external printf function

main:
    mov edi, format             ; 1st argument: pointer to the format string
    xor eax, eax                ; Clear EAX register (return value)
    call printf                 ; Call printf function

    mov eax, 0                  ; Return 0 from the main function
    ret
