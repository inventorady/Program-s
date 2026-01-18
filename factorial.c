#include <stdio.h>

void main()
 {
    int n, i;
    int fact = 1;   // factorial starts with 1

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        fact = fact * i;   // multiply each number
    }

    printf("Factorial of %d = %d\n", n, fact);

    
}