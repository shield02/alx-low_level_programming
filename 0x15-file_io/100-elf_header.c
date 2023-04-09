#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * is_elf - Check if the file is an ELF file
 * @e_ident: unsigned char, pointer to an array of ELF magic numbers
 * @file: path to file
 *
 * Description: This function checks if the file is an ELF file,
 * if not it exit with 98
 * Return: void
 */
void is_elf(unsigned char *e_ident, char *file)
{
	int n = 0;

	do {
		if (e_ident[n] != 127 && e_ident[n] != 'E' &&
			e_ident[n] != 'L' && e_ident[n] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: `%s` is not an ELF file\n", file);
			exit(98);
		}
		n++;
	} while (n < 4);
}

/**
 * print_magic - Prints the magic numbers
 * @e_ident: unsigned char, pointer to an array of ELF magic numbers
 *
 * Description: This function prints to stdout, the magic numbers
 * of an ELF header file separated by a space
 * Return: void
 */
void print_magic(unsigned char *e_ident)
{
	int n = 0;

	printf("  Magic:    ");

	do {
		printf("%02x", e_ident[n]);

		if (n == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		n++;
	} while (n < EI_NIDENT);
}

/**
 * print_class - Prints the class
 * @e_ident: unsigned char, pointer to an array of ELF class names
 *
 * Description: This function prints to stdout, the class name of
 * an ELF file
 * Return: void
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                              ");

	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_data - Prints the data
 * @e_ident: unsigned char, pointer to an array of ELF class data
 *
 * Description: This function prints to stdout, the data of an
 * ELF file
 * Return: void
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                               ");
	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_version - Prints the version
 * @e_ident: unsigned char, pointer to an array of ELF version data
 *
 * Description: This function prints to stdout, the data of an
 * ELF file
 * Return: void
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
		e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("  (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_osabi - Prints the OS/ABI
 * @e_ident: unsigned char, pointer to an array of ELF OS/ABI data
 *
 * Description: This function prints to stdout, the OS/ABI of an
 * ELF file
 * Return: void
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                             ");
	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - LINUX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRUE64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 * print_abi - Prints the ABI version
 * @e_ident: unsigned char, pointer to an array of ALF ABI version
 *
 * Description: This function prints to stdout, the ABI version
 * number of an ELF file
 * Return: void
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                     %d\n",
		e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the TYPE
 * @e_type: unsigned int, ELF type
 * @e_ident: unsigned char, pointer to an array of ALF type
 *
 * Description: This function prints to stdout, the TYPE of
 * an ELF file
 * Return: void
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:                               ");
	if (e_type == ET_NONE)
		printf("NONE (None)\n");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", e_type);
}

/**
 * print_entry - Prints the entry point
 * @e_entry: unsigned long int, address of the ELF entry point
 * @e_ident: unsigned char, pointer to an array of ELF entry points
 *
 * Description: This function prints to stdout the entry point
 * of an ELF file
 * Return: void
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:                ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * read_error - hanlde read error
 * @file: File to be read
 *
 * Description: This function handles error when
 * a file cannot be read
 * Return: void
 */
void read_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * file_error - hanlde file error
 * @file: path to the file
 *
 * Description: This function handles error when
 * a file cannot be found
 * Return: void
 */
void file_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", file);
	exit(98);
}

/**
 * close_error - hanlde close error
 * @handle: A file handle
 *
 * Description: This function handles error in closing a file
 * Return: void
 */
void close_error(int handle)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", handle);
	exit(98);
}

/**
 * main - displays the information contained in the ELF header
 * @arg: int __attribut__, number of command line arguments
 * @arr: char type, pointer to array of command line arguments
 *
 * Description: This function displays the information contained
 * in the header of an ELF file, exits with code 98 on failure
 * Return: int
 */
int main(int __attribute__((__unused__)) arg, char *arr[])
{
	Elf64_Ehdr *header;
	int open_handle, read_handle;

	open_handle = open(arr[1], O_RDONLY);
	if (open_handle == -1)
		read_error(arr[1]);
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close(open_handle);
		read_error(arr[1]);
	}
	read_handle = read(open_handle, header, sizeof(Elf64_Ehdr));
	if (read_handle == -1)
	{
		free(header);
		close(open_handle);
		file_error(arr[1]);
	}

	is_elf(header->e_ident, arr[1]);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	if (close(open_handle) == -1)
		close_error(open_handle);

	return (0);
}

