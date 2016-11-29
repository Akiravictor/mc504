.section ".rodata..compressed","a",@progbits
.globl z_input_len
z_input_len = 3203739
.globl z_output_len
z_output_len = 6301112
.globl input_data, input_data_end
input_data:
.incbin "arch/x86/boot/compressed/vmlinux.bin.bz2"
input_data_end:
