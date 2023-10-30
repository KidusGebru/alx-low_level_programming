#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <elf.h>

/**
 * _print_header - Prints ELF header to stdout
 * @header: Struct header
 *
 * Return: void
 */
void _print_header(Elf64_Ehdr *header)
{
	int i = 0;

	printf("Magic:	");

	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("Class:				");
	printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:				");
	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else
		printf("2's complement, big endian\n");
	printf("Version:			");
	printf("%u\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:				");
	printf("%u\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:			");
	printf("%u\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:				");
	printf("%u\n", header->e_type);
	printf("Entry point address:		");
	printf("%#010x\n", (unsigned int)header->e_entry);
}

/**
 * main - Displays information information of ELF header
 * @argc: Agument counter
 * @argv: Pointer to argument strings
 *
 * Return: 98 on failure, 0 on success
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (read(fd, &header, sizeof(Elf64_Ehdr)) == -1)
	{
		dprintf(2, "Error: Can't read ELF header from file %s\n", argv[1]);
		exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(2, "Error: File not ELF %s\n", argv[1]);
		exit(98);
	}
	_print_header(&header);
	return (0);
}
