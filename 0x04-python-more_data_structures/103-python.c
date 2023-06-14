#include <stdio.h>

/**
 * print_python_list - Prints list
 * @p: python object
 */
void print_python_list(PyObject *p)
{
long int size, j;
PyListObject *list;
PyObject *obj;

size = ((PyVarObject *)(p))->ob_size;
list = (PyListObject *)p;

printf("[*] Python list info\n");
printf("[*] Size of the Python List = %ld\n", size);
printf("[*] Allocated = %ld\n", list->allocated);

for (j = 0; j < size; j++)
{
obj = ((PyListObject *)p)->ob_item[j];
printf("Element %ld: %s\n", j, ((obj)->ob_type)->tp_name);
if (PyBytes_Check(obj))
print_python_bytes(obj);
}
}

/**
 * print_python_bytes - prints bytes
 * @p: python object
 */
void print_python_bytes(PyObject *p)
{
char *string;
long int size, j, limit;

printf("[.] bytes object info\n");
if (!PyBytes_Check(p))
{
printf("  [ERROR] Invalid Bytes Object\n");
return;
}

size = ((PyVarObject *)(p))->ob_size;
string = ((PyBytesObject *)p)->ob_sval;

printf("  size: %ld\n", size);
printf("  trying string: %s\n", string);

if (size >= 10)
limit = 10;
else
limit = size + 1;

printf("  first %ld bytes:", limit);

for (j = 0; j < limit; j++)
if (string[j] >= 0)
printf(" %02x", string[j]);
else
printf(" %02x", 256 + string[j]);

printf("\n");
}
