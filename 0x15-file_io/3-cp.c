#include "main.h"

/**
 * main - an entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int f1, f2; 
int n1 = 1024, n2 = 0;
char buf[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
f1 = open(argv[1], O_RDONLY);
if (f1 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (f2 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(f1), exit(99);
}
while (n1 == 1024)
{
	n1 = read(f1, buf, 1024);
	if (n1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	n2 = write(f2, buf, n1);
	if (n2 < n1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(f1) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);

if (close(f2) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);

return (0);
}

