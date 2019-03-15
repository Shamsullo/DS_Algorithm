# DataStructures

computyer system in a programer prospective: Chapter(3) 3.7 - 3. 6 3.13(the diffference between 32 and 64 bit OP)  

#Computer Architecture

Computer Architecture Theoreticial exam:
25th of March 10:50
  1. multiple choices question
  2. what does the code mean 
  3. what a program in the peice of paper 



rsp - esp --- stack call

rsp - head of stack
rbp - end of stack


class work on 03,15,2019

.section .data

# static const char *input_format = "%ld";
input_format:
    .string "%ld"
# static const char *output_format = "%ld\n";
output_format:
    .string "%ld\n"

.section .text

flib_loop:
.fib_start:
    dec %rdi
    test %rdi % %rdi # cmp $0, %rdi
    jle fib_end

    mov %rsi, %rcx #temp = a;
    mov %rdz, %rsi # a =b
    mov %rcx %rdx # b += tmep
    jmp .fib_start


.fib_end:
    mov %rsi, %rax    
    ret 


.global main
main:
    
    push %rbp
    mov %rsp, %rbp

    #long n
    sub $8, %rsp

    #call acanf 
    lea input_format(%rip), %rdi
    mov %rsp, %rsi
    xor %eax, %eax
    call scanf@plt

    mov (%rsp), %rdi #*s -> data # n
    mov $0, %rsi    #xor %rsi, %rsi #a
    mov $1, %rdx    #b
    call flib_loop



    lea output_format(%rip), %rdi
    mov %rax, %rsi
    xor %eax, %eax
    call print@plt

    #add $8, %

    leave

    # return 0;
    xor %eax, %eax
    ret

