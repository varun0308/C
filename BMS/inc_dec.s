	.file	"inc_dec.c"
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%d\0"
.LC1:
	.ascii "\12%d\0"
.LC2:
	.ascii "\12%f\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	subq	$56, %rsp
	.seh_stackalloc	56
	.seh_endprologue
	call	__main
	movl	$6, 44(%rsp)
	movl	$30, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$6, 44(%rsp)
	movl	$36, %edx
	leaq	.LC1(%rip), %rcx
	call	printf
	leaq	44(%rsp), %rdx
	leaq	.LC0(%rip), %rcx
	call	scanf
	movl	44(%rsp), %eax
	leal	-1(%rax), %edx
	movl	%edx, %eax
	imull	%edx, %eax
	imull	%eax, %edx
	leaq	.LC1(%rip), %rcx
	call	printf
	movl	44(%rsp), %edx
	leaq	.LC1(%rip), %rcx
	call	printf
	movl	$10, %edx
	leaq	.LC2(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$56, %rsp
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 5.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
