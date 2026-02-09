/*
2️⃣ Pointer and Array Traversal

**Program 2:**
**“Write a C program to access array elements using pointers instead of array indexing.”**
✔ Pointer arithmetic
✔ Array–pointer relationship
*/
  
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    ptr = arr;  

    printf("***** Array elements using pointers: *****\n");

    for (i = 0; i < 5; i++) {
        printf("--> Element %d = %d\n", i, *(ptr + i));
    }

    return 0;
}
