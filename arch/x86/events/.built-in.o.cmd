cmd_arch/x86/events/built-in.o :=  ld -m elf_i386   -r -o arch/x86/events/built-in.o arch/x86/events/core.o arch/x86/events/amd/core.o arch/x86/events/amd/uncore.o arch/x86/events/amd/ibs.o arch/x86/events/msr.o arch/x86/events/intel/built-in.o 
