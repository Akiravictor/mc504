cmd_arch/x86/kernel/fpu/built-in.o :=  ld -m elf_i386   -r -o arch/x86/kernel/fpu/built-in.o arch/x86/kernel/fpu/init.o arch/x86/kernel/fpu/bugs.o arch/x86/kernel/fpu/core.o arch/x86/kernel/fpu/regset.o arch/x86/kernel/fpu/signal.o arch/x86/kernel/fpu/xstate.o 