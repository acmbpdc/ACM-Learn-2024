# Nested functions

# function (x, y) {
#     return square(x) + square(y)
# }

# square(n) {
#     return n ^ 2
# }

.data
X: .word 2
Y: .word 3

new_line: .asciiz "\n"

.text

main:
    lw $t0, X
    lw $t1, Y

    li $s0, 10

    jal function # function(t0, t1)
    # t2 = function(t0, t1)

    li $v0, 1
    move $a0, $t2
    syscall

    li $v0, 4
    la $a0, new_line
    syscall


    li $v0, 1
    add $a0, $t2, $s0 # a0 = function(t0, t1) + 10 (s0)
    syscall
    
    # Exit program
    li $v0, 10
    syscall
.end main

function: # function(x, y) -> square(x) + square(y)
    # t0 -> x
    # t1 -> y

    # Return value -> t2

    # Store data to the stack
    addi $sp, $sp, -20 # initialize sp to its correct pos
	sw $ra, 16($sp)   # saves $ra to the stack
    sw $s0, 12($sp)   # saves $s0 to the stack
    sw $s1, 8($sp)   # saves $s1 to the stack
    sw $t3, 4($sp)   # saves $t3 to the stack
    sw $t4, 0($sp)   # saves $t4 to the stack

    # square(x)
        move $s0, $t0 # s0 = t0
        jal square # square(s0)
        move $t3, $s1 # t3 = square(s0) | s1

    # square(y)
        move $s0, $t1 # s0 = t1
        jal square # square(s0)
        move $t4, $s1 # t4 = square(s0) | s1
    
    add $t2, $t3, $t4

    # load all saved registers from the stack
	lw $t4, 0($sp) # loads $ra from the stack
    lw $t3, 4($sp) # loads $ra from the stack
    lw $s1, 8($sp) # loads $ra from the stack
    lw $s0, 12($sp) # loads $ra from the stack
    lw $ra, 16($sp) # loads $ra from the stack
	addi $sp, $sp, 20

jr $ra
.end function

square: # square(n) -> n ^ 2
    # s0 -> n
    # Return value -> s1

    mult	$s0, $s0 # low = s0 * s0
    mflo	$s1 # s1 = low

jr $ra
.end function

