/*
    wap to show demo of array of pointer
    developed by : adi
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *names[100];
    int n;

    printf("HOW MANY NAMES YOU WANT TO ENTER: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        names[i] = (char *)malloc(50 * sizeof(char)); 

        printf("ENTER NAME %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nNAMES ARE:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    for(int i = 0; i < n; i++) {
        free(names[i]);
    }

    return 0;
}
