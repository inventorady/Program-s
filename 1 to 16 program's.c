           
           PRACTICAL ASSIGNMENT 


---

1. Display student information

#include <stdio.h>
int main() {
    printf("Name\t: Aditya Vyas\n");
    printf("Course\t: MSc IT\n");
    printf("College\t: Sutex Bank College, Amroli\n");
    return 0;
}


---

2. Arithmetic operations

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Addition: %d\n", a+b);
    printf("Subtraction: %d\n", a-b);
    printf("Multiplication: %d\n", a*b);
    printf("Division: %d\n", a/b);
    printf("Modulus: %d\n", a%b);
    return 0;
}


---

3. Largest among 3 using nested if

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c) printf("%d is largest",a);
        else printf("%d is largest",c);
    } else {
        if(b>c) printf("%d is largest",b);
        else printf("%d is largest",c);
    }
    return 0;
}


---

4. Even or Odd

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0) printf("Even");
    else printf("Odd");
    return 0;
}


---

5. Class result using if–else–if

#include <stdio.h>
int main() {
    float p;
    printf("Enter percentage: ");
    scanf("%f",&p);
    if(p>=75) printf("Distinction");
    else if(p>=60) printf("First Class");
    else if(p>=45) printf("Second Class");
    else if(p>=35) printf("Pass");
    else printf("Fail");
    return 0;
}


---

6. ATM simulation (switch)

#include <stdio.h>
int main() {
    int choice;
    printf("1.Balance\n2.Withdraw\n3.Deposit\nChoose option: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("Balance: 50000"); break;
        case 2: printf("Withdraw successful"); break;
        case 3: printf("Deposit successful"); break;
        default: printf("Invalid choice");
    }
    return 0;
}


---

7. Leap year

#include <stdio.h>
int main() {
    int y;
    printf("Enter year: ");
    scanf("%d",&y);
    if((y%4==0 && y%100!=0) || (y%400==0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
    return 0;
}


---

8. Sum of first 10 natural numbers

#include <stdio.h>
int main() {
    int sum=0;
    for(int i=1;i<=10;i++) sum+=i;
    printf("Sum = %d",sum);
    return 0;
}


---

9. Fibonacci series

#include <stdio.h>
int main() {
    int n,a=0,b=1,c;
    printf("Enter terms: ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=3;i<=n;i++){
        c=a+b;
        printf("%d ",c);
        a=b; b=c;
    }
    return 0;
}


---

10. Palindrome number

#include <stdio.h>
int main() {
    int n,r,rev=0,temp;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(temp==rev) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}


---

11. Factorial using while

#include <stdio.h>
int main() {
    int n,f=1,i=1;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<=n){
        f*=i;
        i++;
    }
    printf("Factorial = %d",f);
    return 0;
}


---

12. Marks, total, percentage & result

#include<stdio.h>
int main(){
    int m[5],s=0;
    for(int i=0;i<5;i++){
        printf("Enter marks: ");
        scanf("%d",&m[i]);
        s+=m[i];
    }
    float p=s/5.0;
    printf("Total=%d\nPercentage=%.2f\n",s,p);
    if(p>=75) printf("Distinction");
    else if(p>=60) printf("First");
    else if(p>=45) printf("Second");
    else if(p>=35) printf("Pass");
    else printf("Fail");
}


---

13. Largest & Smallest in array

#include <stdio.h>
int main() {
    int n,a[100];
    printf("Enter size: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    printf("Max=%d Min=%d",max,min);
}


---

14. Sort array ascending

#include <stdio.h>
int main() {
    int n,a[100],t;
    printf("Enter size: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i]; a[i]=a[j]; a[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}


---

15. Matrix addition & subtraction

#include <stdio.h>
int main() {
    int r,c,a[10][10],b[10][10];
    printf("Enter rows & cols: ");
    scanf("%d %d",&r,&c);
    printf("Matrix A:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    printf("Matrix B:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++) scanf("%d",&b[i][j]);

    printf("Addition:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) printf("%d ",a[i][j]+b[i][j]);
        printf("\n");
    }

    printf("Subtraction:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) printf("%d ",a[i][j]-b[i][j]);
        printf("\n");
    }
}


---

16. String length, reverse, vowels

#include <stdio.h>
#include <string.h>
int main(){
    char s[50];
    int v=0;
    printf("Enter string: ");
    gets(s);
    for(int i=0;s[i];i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
        || s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v++;
    }
    printf("Length: %ld\n",strlen(s));
    printf("Reverse: %s\n",strrev(s));
    printf("Vowels: %d",v);
}


---

