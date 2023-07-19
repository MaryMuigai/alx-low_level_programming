#include "function_pointers.h"

/**
* print_name - This function prints a name
* @name: Pointer string
* @f: Pointer to function
*
* Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
