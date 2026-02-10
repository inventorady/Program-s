/*
    wap to show demo of pointer and dynamic array
    developed by : adi
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *p;

    printf("Enter size of array: ");
    scanf("%d", &n);

   
    p = (int *)malloc(n * sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }

   
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n ", *(p + i));
    }

   
    free(p);

    return 0;
}
