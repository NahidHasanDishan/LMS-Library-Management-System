#include <stdio.h>
#include "delete.c"

void test_delete_invalid()
{
    int actual = isValidDeleteId(0);
    int expected = 0;

    printf("expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);
}

void test_delete_valid()
{
    int actual = isValidDeleteId(45);
    int expected = 1;

    printf("expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);
}

int main()
{
    test_delete_invalid();
    test_delete_valid();
    return 0;
}