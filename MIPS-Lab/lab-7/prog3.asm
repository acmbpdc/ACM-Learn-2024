# Fibonacci series using procedures
#     fib(0) = 0
#     fib(1) = 1
#     fib(n) = fib(n-1) + fib(n-2)

#     0, 1, 1, 2, 3, 5, 8, 13, 21, ...

#     void fibo(int n)
#     {
        
#     }

.data
max_limit: .word 100 # all fib numbers less than 100
sep: .asciiz ", "

.text

main:
    lw $t0, max_limit

    jal fib # fib(t0)
    
    # Exit program
    li $v0, 10
    syscall
.end main


# code block starts here
fib: # fib(max_limit) -> return nothing, print fib seq
    # t0 -> max_limit (int)

    # a, b = 0, 1
    # while b < max_limit
    #   a, b = b, (a + b)

    # t1 -> a, t2 -> b
    li $t1, 0
    li $t2, 1

    # Print a
    li $v0, 1
    move $a0, $t1
    syscall

    # Print seperator
    li $v0, 4
    la $a0, sep
    syscall

    # Print b
    li $v0, 1
    move $a0, $t2
    syscall

    fib_loop_start:

        # t4 -> temp = b
        move $t4, $t2

        # b = a + b
        add $t2, $t1, $t2

        bge $t2, $t0, fib_loop_end

        # a = b (old value)
        move $t1, $t4

        # Print seperator
        li $v0, 4
        la $a0, sep
        syscall

        # Print b (new value)
        li $v0, 1
        move $a0, $t2
        syscall

        j fib_loop_start
    fib_loop_end:

    jr $ra
.end fib

# ends here