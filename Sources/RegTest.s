	xref ulRegTest1LoopCounter
	xref ulRegTest2LoopCounter

    xdef vRegTest1Task
    xdef vRegTest2Task

vRegTest1Task:

    lea s, (-1, s)
    mov.b #10, (0, s)

    ; Fill the core registers with known values.
    mov.b #10, d0
    mov.b #11, d1
    mov.b #12, d2
    mov.b #13, d3
    mov.b #14, d4
    mov.b #15, d5
    mov.b #16, d6
    mov.b #17, d7
    lea x, 18
    lea y, 19

reg1_loop:

    cmp d0, (0, s)
    bne reg1_error_loop

    mov.b #11, d0
    cmp d1, d0
    bne reg1_error_loop

    mov.b #12, d0
    cmp d2, d0
    bne reg1_error_loop

    mov.b #13, d0
    cmp d3, d0
    bne reg1_error_loop

    mov.b #14, d0
    cmp d4, d0
    bne reg1_error_loop

    mov.b #15, d0
    cmp d5, d0
    bne reg1_error_loop

    mov.b #16, d0
    cmp d6, d0
    bne reg1_error_loop

    mov.b #17, d0
    cmp d7, d0
    bne reg1_error_loop

    mov.b #18, d0
    cmp x, d0
    bne reg1_error_loop

    mov.b #19, d0
    cmp y, d0
    bne reg1_error_loop

    ; Everything passed, increment the loop counter.
    ld d6, ulRegTest1LoopCounter
    inc d6
    st d6, ulRegTest1LoopCounter

    ; Start again.
    mov.b #10, d0
    mov.b #16, d6
    bra reg1_loop

reg1_error_loop:

    bra reg1_error_loop

;-----------------------------------------------------------

vRegTest2Task:

    lea s, (-1, s)
    mov.b #20, (0, s)

    ; Fill the core registers with known values.
    mov.b #20, d0
    mov.b #21, d1
    mov.b #22, d2
    mov.b #23, d3
    mov.b #24, d4
    mov.b #25, d5
    mov.b #26, d6
    mov.b #27, d7
    lea x, 28
    lea y, 29

reg2_loop:

    cmp d0, (0, s)
    bne reg2_error_loop

    mov.b #21, d0
    cmp d1, d0
    bne reg2_error_loop

    mov.b #22, d0
    cmp d2, d0
    bne reg2_error_loop

    mov.b #23, d0
    cmp d3, d0
    bne reg2_error_loop

    mov.b #24, d0
    cmp d4, d0
    bne reg2_error_loop

    mov.b #25, d0
    cmp d5, d0
    bne reg2_error_loop

    mov.b #26, d0
    cmp d6, d0
    bne reg2_error_loop

    mov.b #27, d0
    cmp d7, d0
    bne reg2_error_loop

    mov.b #28, d0
    cmp x, d0
    bne reg2_error_loop

    mov.b #29, d0
    cmp y, d0
    bne reg2_error_loop

    ; Everything passed, increment the loop counter.
    ld d6, ulRegTest2LoopCounter
    inc d6
    st d6, ulRegTest2LoopCounter

    ; Start again.
    mov.b #20, d0
    mov.b #26, d6
    bra reg2_loop

reg2_error_loop:

    bra reg2_error_loop
