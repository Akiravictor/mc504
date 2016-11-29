cmd_drivers/acpi/processor.ko := ld -r -m elf_i386 -T ./scripts/module-common.lds --build-id  -o drivers/acpi/processor.ko drivers/acpi/processor.o drivers/acpi/processor.mod.o
