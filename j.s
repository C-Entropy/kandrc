	.file	"k.c"
	.intel_syntax noprefix
	.text
	.globl	simple
	.type	simple, @function











simple:
.LFB0:
	.cfi_startproc
	mov	eax, esi
	add	eax, DWORD PTR [rdi]
	mov	DWORD PTR [rdi], eax
	ret
	.cfi_endproc
.LFE0:
	.size	simple, .-simple
	.ident	"GCC: (Debian 6.3.0-18) 6.3.0 20170516"
	.section	.note.GNU-stack,"",@progbits
