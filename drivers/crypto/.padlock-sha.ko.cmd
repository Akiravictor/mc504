cmd_drivers/crypto/padlock-sha.ko := ld -r -m elf_i386 -T ./scripts/module-common.lds --build-id  -o drivers/crypto/padlock-sha.ko drivers/crypto/padlock-sha.o drivers/crypto/padlock-sha.mod.o
