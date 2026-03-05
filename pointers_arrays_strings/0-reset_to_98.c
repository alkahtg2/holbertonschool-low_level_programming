#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int and updates the value it points to 98
 * @n: pointer to an integer
 */
void reset_to_98(int *n)
{
    *n = 98; // dereference the pointer and set the value to 98
}

int main(void)
{
    int n;

    n = 0; // any initial value
    printf("Before reset: n = %d\n", n);

    reset_to_98(&n); // pass the address of n to the function

    printf("After reset: n = %d\n", n);

    return 0;
}
