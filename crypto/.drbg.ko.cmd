cmd_crypto/drbg.ko := ld -r -m elf_i386 -T ./scripts/module-common.lds --build-id  -o crypto/drbg.ko crypto/drbg.o crypto/drbg.mod.o
