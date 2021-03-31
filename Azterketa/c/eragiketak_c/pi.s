	.file	"pi.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"\302\277Quieresconoceraln\303\272meroPI?(S/N)"
.LC2:
	.string	"%f"
.LC3:
	.string	"Agur"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	call	getchar@PLT
	movb	%al, -1(%rbp)
	cmpb	$83, -1(%rbp)
	je	.L2
	cmpb	$115, -1(%rbp)
	jne	.L3
.L2:
	movq	.LC1(%rip), %rax
	movq	%rax, -24(%rbp)
	movsd	-24(%rbp), %xmm0
	leaq	.LC2(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L4
.L3:
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L4:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC1:
	.long	3229815407
	.long	1074340298
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
