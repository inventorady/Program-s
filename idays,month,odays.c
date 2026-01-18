#include<stdio.h>
void main() 
{ 
   int idays,month,odays;
   printf("ENTER THE TOTAL DAYS ");
   scanf("%d",&idays);
   
   month =idays/30;
   odays=idays%30;
   printf("TOTAL NUMBER OF DAYS %d,ANSWER%D,month and %d days",idays,month,odays);
   
   }
   