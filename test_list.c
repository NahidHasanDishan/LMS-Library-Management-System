#include <stdio.h>
#include "list.c"


void test_list_invalid()
{
    int actual = isValidListCount(0);
    int expected = 0;

    printf("expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);
}


void test_list_valid()
{
    int actual = isValidListCount(5);
    int expected = 1;

    printf("expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);
}

int main()
{
    
    test_list_valid();
    test_list_invalid();
    
    return 0;
}