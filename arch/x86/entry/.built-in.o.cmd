cmd_arch/x86/entry/built-in.o :=  ld -m elf_i386   -r -o arch/x86/entry/built-in.o arch/x86/entry/entry_32.o arch/x86/entry/thunk_32.o arch/x86/entry/syscall_32.o arch/x86/entry/common.o arch/x86/entry/vdso/built-in.o arch/x86/entry/vsyscall/built-in.o 