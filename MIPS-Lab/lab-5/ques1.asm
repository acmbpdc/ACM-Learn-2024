# Find the largest element of a word array A which has 10 elements.

# largest = arrray[0]
# for i in range(len(array)):
#   x = array[i]
#   if x > largest:
#       largest = x

.data
array: .word 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
size: .word 10

msg1: .asciiz "Largest element is : "

.text

main:
    la $t0, array # t0 -> array ptr
    lw $t1, size

    lw $t2, 0($t0) # t2 = array[0] (largest element)

    li $t3, 0 # t3 -> i = 0

    largest_ele_loop_start:
        # if i >= size: -> branch to end if i >= size
        #   break
        bge	$t3, $t1, largest_ele_loop_end

        # t4 -> current_element = array[i]
        lw $t4, 0($t0)

        # if (current_element > largest) -> branch not larger if current_element <= largest

        ble $t4, $t2, not_larger

        # largest = current_element -> t2 = t4
        move $t2, $t4

        not_larger:
        addi $t3, $t3, 1 # i += 1
        addi $t0, $t0, 4 # array_ptr = array[i]
        j largest_ele_loop_start

    largest_ele_loop_end:

    # largest element is stored in $t2

    li $v0, 4 # System call code for printing string
    la $a0, msg1 # print("Largest element is : ")
    syscall

    li $v0, 1 # System call code for printing int
    move $a0, $t2 # print(t2)
    syscall

    # Exit code
    li $v0, 10
    syscall
.end main