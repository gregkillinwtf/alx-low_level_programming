#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory.
 * @b: size of the memory to be allocated.
 *
 * Return: always success.
**/

void *malloc_checked(unsigned int b)
{
void *array = malloc(b);

if (array == NULL)
{
exit(98);
}
return (array);
}
