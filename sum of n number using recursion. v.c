#include <stdio.h>


int num(int i);

int main()
{
    int i, result;

    printf("Enter a number: ");
    scanf("%d", &i);

    result = num(i);

    printf("Sum of first %d numbers = %d", i, result);

    return 0;
}

// Recursive function definition
int num(int i)
{
    if (i == 0)
        return 0;
    else
        return i + num(i - 1);
}