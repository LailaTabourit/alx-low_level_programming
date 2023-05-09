#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
/*--------------------------------------DEFINE VARIABLES---------------------------------*/
#define ELF_MAGIC_SIZE 4
#define ELF_CLASS_SIZE 1
#define ELF_DATA_SIZE 1
#define ELF_VERSION_SIZE 1
#define ELF_OSABI_SIZE 1
#define ELF_ABIVERSION_SIZE 1
#define ELF_TYPE_SIZE 2
#define ELF_ENTRY_SIZE 8

#define ELF_MAGIC_OFFSET 0
#define ELF_CLASS_OFFSET 4
#define ELF_DATA_OFFSET 5
#define ELF_VERSION_OFFSET 6
#define ELF_OSABI_OFFSET 7
#define ELF_ABIVERSION_OFFSET 8
#define ELF_TYPE_OFFSET 16
#define ELF_ENTRY_OFFSET 24

void display_elf_header(const char *filename)
{
	int fopen = open(filename, O_RDONLY);
	if (fopen == -1)
	{
		fprintf(stderr, "Failed to open file: %s\n", filename);
		exit(98);
	}
/*-----Read_ELF_magic------*/
	char elf_magic[ELF_MAGIC_SIZE];
	if (read(fopen, elf_magic, ELF_MAGIC_SIZE) != ELF_MAGIC_SIZE)
	{
		fprintf(stderr, "Failed to read ELF magic\n");
		exit(98);
	}
/*----Check_ELF_magic------*/
	if (elf_magic[0] != 0x7f || elf_magic[1] != 'E' || elf_magic[2] != 'L' || elf_magic[3] != 'F')
	{
		fprintf(stderr, "Invalid ELF magic\n");
		exit(98);
	}
/*----Read_ELF_header_fields--------*/
	uint8_t elf_class, elf_data, elf_version, elf_osabi, elf_abiversion;
	uint16_t elf_type;
	uint64_t elf_entry;

	if (lseek(fopen, ELF_CLASS_OFFSET, SEEK_SET) == -1 || read(fopen, &elf_class, ELF_CLASS_SIZE) != ELF_CLASS_SIZE
	|| read(fopen, &elf_data, ELF_DATA_SIZE) != ELF_DATA_SIZE
	|| read(fopen, &elf_version, ELF_VERSION_SIZE) != ELF_VERSION_SIZE
	|| read(fopen, &elf_osabi, ELF_OSABI_SIZE) != ELF_OSABI_SIZE
	|| read(fopen, &elf_abiversion, ELF_ABIVERSION_SIZE) != ELF_ABIVERSION_SIZE
	|| lseek(fopen, ELF_TYPE_OFFSET, SEEK_SET) == -1
	|| read(fopen, &elf_type, ELF_TYPE_SIZE) != ELF_TYPE_SIZE
	|| lseek(fopen, ELF_ENTRY_OFFSET, SEEK_SET) == -1
	|| read(fopen, &elf_entry, ELF_ENTRY_SIZE) != ELF_ENTRY_SIZE)
	{
		fprintf(stderr, "Failed to read ELF header\n");
		exit(98);
	}

	close(fopen);

/*----Display_ELF_header_information--------*/
	printf("Magic:   %02x %02x %02x %02x\n", elf_magic[0], elf_magic[1], elf_magic[2], elf_magic[3]);
	printf("Class:   %u-bit\n", elf_class == 1 ? 32 : 64);
	printf("Data:    %s\n", elf_data == 1 ? "little-endian" : "big-endian");
	printf("Version: %u\n", elf_version);
	printf("OS/ABI:  %u\n", elf_osabi);
	printf("ABI Version: %u\n", elf_abiversion);
	printf("Type:    %u\n", elf_type);
	printf("Entry point address: 0x%llx\n", (unsigned long long)elf
