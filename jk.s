	.file	"k.c"
	.text
	.globl	simple
	.type	simple, @function
simple:
.LFB0:
	.cfi_startproc
	leal	(%rdi,%rsi), %eax
	ret
	.cfi_endproc
.LFE0:
	.size	simple, .-simple
	.globl	sim
	.type	sim, @function
sim:
.LFB1:
	.cfi_startproc
	addss	%xmm1, %xmm0
	ret
	.cfi_endproc
.LFE1:
	.size	sim, .-sim
	.ident	"GCC: (Debian 6.3.0-18) 6.3.0 20170516"
	.section	.note.GNU-stack,"",@progbits
