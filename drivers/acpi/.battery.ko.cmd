cmd_drivers/acpi/battery.ko := ld -r -m elf_i386 -T ./scripts/module-common.lds --build-id  -o drivers/acpi/battery.ko drivers/acpi/battery.o drivers/acpi/battery.mod.o
