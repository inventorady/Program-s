//#include<stdio.h>
//void main()
//{ 
  //int n,sum=0,i=1;
 // printf("ENTER NUMBER:");
 // scanf("%d",&n);
 // while(i<=n)
 // {
 // sum +=i  ++i; 
 // }
  //   printf("sum %d\n",sum);



#include <stdio.h>
void main() 
{
    int n, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
     {
        sum += i;
        i++;
    }
    printf("Sum: %d\n", sum);
    
}