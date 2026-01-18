#include<stdio.h>
void main()
{
  int a,b,add,sub,multi,div;
  char opretor;
         printf("ENTER OPERATOR :");
         scanf("%c",&opretor);
         printf("ENTER ONE OPERATION:");
         scanf("%d",&a);
         printf("ENTER SECOND OPERATION :");
         scanf("%d",&b);
   switch(opretor)
   {
       case '+': add= a+b;
          printf("add=%d",add);
          break;
       case '-': sub= a-b;
          printf("sub=%d",sub);
          break;  
       case '*' : multi= a*b;
          printf("multi=%d",multi);
          break;
       case '/' : div= a/b;
          printf("div=%d",div);
          break;     
       default :
       printf("ENTER VALID OPRETOR :");
       }
       







}