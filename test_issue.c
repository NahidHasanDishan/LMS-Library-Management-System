#include <stdio.h>
#include "issue.c"


void test_issue_invalid()
{
    int actual = isValidIssueId(-1);
    int expected = 0;

    printf("expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);
}


void test_issue_valid()
{
    int actual = isValidIssueId(200);
    int expected = 1;

    printf("expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);
}

int main()
{
    test_issue_invalid();
    test_issue_valid();
    return 0;
}