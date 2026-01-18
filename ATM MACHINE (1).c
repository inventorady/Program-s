#include<stdio.h>
void main()
{
int choice,anumber,pin;
printf("\n WELCOME TO OUR AMROL BANK");
printf("\n PLEASE SELECT ANY OPTION FROM BELOW");
printf("\n 1.select your language");
printf("\n 2.select your account type:");
printf("\n 3.chack balance:");
printf("\n 4.withdrawl");
printf("\n 5.pin change:");
printf("\n 6.cardless withdrawal");
printf("\n 7.exit:");
scanf("%d" ,&choice);
switch(choice)
{
     case 1:
    printf("\n please select your language ");
    printf("\n 1.ENGLISH");
    printf("\n 2.HINDI");
    printf("\n 3.GUJARATI");
    printf("\n 4.MARATHI");
    break;
    
    case 2:
    printf("\n please select your account type");
    printf("\n (1).SAVING ACCOUNT");
    printf("\n (2).CURRENT ACCOUNT");
    printf("\n (3).fixed deposit");
    printf("\n (4).recurrting deposit");
    break;
    
    case 3:
    printf("\n YOU SELECTED CHACK BALANCE");
    printf("\n please enter your pin");
    scanf("%d" ,&pin);
    printf("\n your bank balance is 200000000$");
    break;
    
    case 4:
    printf("\n how many you select withdrawal");
    printf("(1) 500-1000\n");
    printf("(2) 1000-1500\n");
    printf("(3) 1500-2000\n");
    printf("(4) 2000-up");
    printf("Enter your select withdrawal\n");
    printf("\n please enter your pin");
    scanf("%d" ,&pin);
    printf("\n your withdrawal amount 11374732883$");
    break;
    
    case 5:
    printf("\n your select pin change");
    printf("\n please enter old pin");
    scanf("%d" ,&pin);
    printf("\n please enter new pin");
    scanf("%d" ,&pin);
    printf("\n your pin generate confirm pin");
    scanf("%d" ,&pin);
    break;
    
    case 6:
    printf("\n select cardless withdrawal");
    printf("\n enter your account number");
    scanf("%d" ,&anumber);
    printf("\n your withdrawal amount 15383838");
    break;
    
    default:
    printf("THANK FOR VISITING");
}
    printf("\n THANK FOR VISIT ,HAVE A NICE DAY!");
}