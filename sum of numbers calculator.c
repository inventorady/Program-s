#include <stdio.h>
void main()
 {
    int i = 1, sum = 0, n;
    printf("Enter the ending number: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d:\n", n);
    while (i <= n) 
    {
        printf("%d\n", i);
        sum += i;
        i++;
    }

    printf("Sum: %d\n", sum);
    printf("End of program\n");
    
}