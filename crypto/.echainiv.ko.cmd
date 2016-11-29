cmd_crypto/echainiv.ko := ld -r -m elf_i386 -T ./scripts/module-common.lds --build-id  -o crypto/echainiv.ko crypto/echainiv.o crypto/echainiv.mod.o
