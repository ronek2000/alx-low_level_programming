#include <stdio.h>
#include <unistd.h>

/**
 * main - A C program that prints a line to the standard error
 * Return: 1 (Error)
 */
int main(void)
{
    write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, ""2015-10-19\n", 59);

    return (1);
}

