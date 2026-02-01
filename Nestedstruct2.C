//wap in c to demonstrate nested structure
developed by : adi

struct Address
{
    char city[50];
    int pincode;
};

struct Student 
{
    char name[100];
    int sid;
    struct Address homeAddress;
    float sper;
};
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() 
 {
    struct Student std;

    printf("Enter Student Name :\n");
    scanf("%s",std.name);

    printf("Enter Student SID : \n");
    scanf("%d",&std.sid);

    printf("Enter Student City : \n");
    scanf("%s",std.homeAddress.city);

    printf("Enter Area Pincode : \n");
    scanf("%d",&std.homeAddress.pincode);

    printf("Enter Student Percentage : \n");
    scanf("%f",&std.sper);
    
    //Display
    printf("\nEmployee Display\n");
    printf("Name : %s\n",std.name);
    printf("Employee ID : %d\n",std.sid);
    printf("City : %s\n",std.homeAddress.city);
    printf("Pincode : %d\n",std.homeAddress.pincode);
    printf("Pincode : %f\n",std.sper);

    return 0;
}