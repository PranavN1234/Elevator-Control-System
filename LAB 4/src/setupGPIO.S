.section .text
.align 2
.globl setupGPIO

#include "memoryMap.inc"
#include "GPIO.inc"

setupGPIO:
    addi sp, sp, -16
    # allocate a stack frame, moves the stack up by 16 bits
    sw ra, 12(sp)
    li t0, GPIO_CTRL_ADDR # load GPIO base address

    li t1, PIN_2 # Floor 1 Button
    li t2, PIN_7 # Floor 2 Button 
    or t1, t1, t2 
    li t2, PIN_8 # Floor 3 Button
    or t1, t1, t2  

    li t2, PIN_9 # go button
    or t1, t1, t2 
    li t2, PIN_17 # open button 
    or t1, t1, t2 
    li t2, PIN_18 # close button 
    or t1, t1, t2 

    sw t1, GPIO_INPUT_EN(t0) # set pin 2 for input enable
    sw t1, GPIO_INPUT_PULUP(t0) # enable pull up

    li t1, PIN_10 # Floor 1
    li t2, PIN_4 # Floor 2
    or t1, t1, t2
    li t2, PIN_11 # Floor 3
    or t1, t1, t2
    li t2, PIN_16 # Open
    or t1, t1, t2
    li t2, PIN_19 # close
    or t1, t1, t2
    li t2, GPIO_RGB_PINS # Moving with the RGB GREEN
    or t1, t1, t2
    
    sw t1, GPIO_OUTPUT_EN(t0)
    sw t2, GPIO_OUTPUT_XOR(t0) 

        
    # write the GPIO RGP pins to GPIO Enable offset
    # (Enable output on RGP pins so we can write)
     # set the XOR so the RGB pins are active high
    lw ra, 12(sp)
    addi sp, sp, 16

    
    ret