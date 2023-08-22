#include <unistd.h>
/**
 * _putchar - write character to the stdout
 * @c - the character
 * Return: 1 on sucess and -1 otherwise
 */
 int _putchar(char c)
 {
    return (write(1, &c, 1));
 }