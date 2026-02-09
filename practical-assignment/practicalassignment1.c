/*
1️⃣ Pointer Basics
Program 1: “Write a C program to demonstrate pointer basics by displaying value, address, pointer value and value using pointer.” ✔ & and * operators ✔ Foundation program

 wap to demonstrate pointer basics by displaying value, address, pointer value and value using pointer
    developed by : adi
*/
#include<stdio.h>
int main()
{
    int n;
    int *ptr = &n;

    printf("ENTER VALUE WHICH YOU STORED:");
    scanf("%d",&n);

    printf("Value of num: %d\n", n);
    printf("Address of num: %p\n", &n);
    printf("Pointer value (address stored in ptr): %p\n", ptr);
    printf("Value using pointer (dereferencing ptr): %d\n", *ptr);

    return 0;
}
