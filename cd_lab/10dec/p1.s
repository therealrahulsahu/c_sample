	.file	"p1.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Enter n : \0"
LC1:
	.ascii "%d\0"
LC3:
	.ascii "Enter %d : \0"
LC4:
	.ascii "%f\0"
LC5:
	.ascii "%.2f \0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ebx
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x3,0x2,0x75,0x7c
	subl	$64, %esp
	call	___main
	movl	%esp, %eax
	movl	%eax, %ebx
	movl	$LC0, (%esp)
	call	_printf
	leal	-32(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	-32(%ebp), %eax
	leal	-1(%eax), %edx
	movl	%edx, -24(%ebp)
	sall	$2, %eax
	leal	3(%eax), %edx
	movl	$16, %eax
	subl	$1, %eax
	addl	%edx, %eax
	movl	$16, %ecx
	movl	$0, %edx
	divl	%ecx
	imull	$16, %eax, %eax
	call	___chkstk_ms
	subl	%eax, %esp
	leal	12(%esp), %eax
	addl	$3, %eax
	shrl	$2, %eax
	sall	$2, %eax
	movl	%eax, -28(%ebp)
	fldz
	fstps	-12(%ebp)
	movl	$0, -16(%ebp)
	jmp	L2
L3:
	movl	-16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	-16(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	-28(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC4, (%esp)
	call	_scanf
	movl	-28(%ebp), %eax
	movl	-16(%ebp), %edx
	flds	(%eax,%edx,4)
	flds	-12(%ebp)
	faddp	%st, %st(1)
	fstps	-12(%ebp)
	addl	$1, -16(%ebp)
L2:
	movl	-32(%ebp), %eax
	cmpl	%eax, -16(%ebp)
	jl	L3
	movl	-32(%ebp), %eax
	movl	%eax, -44(%ebp)
	fildl	-44(%ebp)
	flds	-12(%ebp)
	fdivp	%st, %st(1)
	fstps	-12(%ebp)
	movl	$0, -20(%ebp)
	jmp	L4
L7:
	movl	-28(%ebp), %eax
	movl	-20(%ebp), %edx
	flds	(%eax,%edx,4)
	flds	-12(%ebp)
	fxch	%st(1)
	fucompp
	fnstsw	%ax
	sahf
	jbe	L5
	movl	-28(%ebp), %eax
	movl	-20(%ebp), %edx
	flds	(%eax,%edx,4)
	fstpl	4(%esp)
	movl	$LC5, (%esp)
	call	_printf
L5:
	addl	$1, -20(%ebp)
L4:
	movl	-32(%ebp), %eax
	cmpl	%eax, -20(%ebp)
	jl	L7
	movl	%ebx, %esp
	movl	$0, %eax
	leal	-8(%ebp), %esp
	popl	%ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
