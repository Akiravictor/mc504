cmd_arch/x86/entry/vdso/built-in.o :=  ld -m elf_i386   -r -o arch/x86/entry/vdso/built-in.o arch/x86/entry/vdso/vma.o arch/x86/entry/vdso/vdso32-setup.o arch/x86/entry/vdso/vdso-image-32.o 
