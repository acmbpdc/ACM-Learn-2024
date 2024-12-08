# Power of a given number using recursion
#     int power (int a, int n)
#     {
#         if (n==1)
#             return a;
#         return a * power(n-1)
#     }
#     main()
#     {
#         pow = power(a, n);
#     }

.data
A: .word 2
power: .word 4


new_line: .asciiz "\n"

.text

main:

    lw $t0, A
    lw $t1, power

    jal exponent

    li $v0, 1
    move $a0, $t2
    syscall


    # Exit program
    li $v0, 10
    syscall
.end main


exponent: # exponent(A, power) -> A ^ power
    # t0 -> A
    # t1 -> power
    # Return value t2

    # Store data to the stack
    addi $sp, $sp, -12 # initialize sp to its correct pos
	sw $ra, 8($sp)   # saves $ra to the stack
    sw $t1, 4($sp)   # saves $t1 to the stack
    sw $t3, 0($sp)   # saves $t3 to the stack

    move $t2, $t0

    # if power == 1
    # return a
    li $t3, 1
    beq $t1, $t3, return_exponent

    addi $t1, $t1, -1 # t1 -= 1
    jal exponent # exponent(A, power) -> A ^ power
    # t2 = exponent(t0, t1 - 1)

    # return A * (exponent(A, power - 1))
    # t2 = t0 * t2
    mult $t0, $t2 # low = t0 * t2
    mflo $t2 # t2 = low

    return_exponent:
    # load all saved registers from the stack
    lw $t3, 0($sp) # loads $t3 from the stack
    lw $t1, 4($sp) # loads $t1 from the stack
    lw $ra, 8($sp) # loads $ra from the stack
	addi $sp, $sp, 12
jr $ra
.end exponent