#include <unistd.h>
/**
 * _putchar - writes the character c to stdioiut
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approprietly.
 */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *str);
char *rot13(char *str);
void print_number(int n);
int _putchar(char c);
