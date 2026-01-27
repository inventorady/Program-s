/*
    wap to show demo of pointer of different types in c
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int *pInt = &a;

    printf("INTERGER VALUES : %d,ADDRESS :%p\n",*pInt,(void*)pInt);
    printf("INTERGER VALUES : %d,ADDRESS :%p\n",*pInt,(void*)&a);


     float b = 10.5;
    float *Float = &b;

    printf("FLOAT VALUES : %f,ADDRESS :%p\n",*Float,(void*)Float);
    printf("FLOAT VALUES : %f,ADDRESS :%p\n",*Float,(void*)&b);


    char c = 'A';
    char *Char = &c;

    printf("char VALUES : %c,ADDRESS :%p\n",*Char,(void*)Char);
    printf("char VALUES : %c,ADDRESS :%p\n",*Char,(void*)&c);

    double d = 20.99;
    double *Double = &d;

    printf("DOUBLE VALUES : %lf,ADDRESS :%p\n",*Double,(void*)Double);
    printf("DOUBLE VALUES : %lf,ADDRESS :%p\n",*Double,(void*)&d);

    return 0;

}