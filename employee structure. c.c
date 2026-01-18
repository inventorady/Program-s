#include <stdio.h>

struct Employee
{
    int empid;
    char ename[50];
    float esalary;
    char edip[20];
    char erole[20];
};

int main()
{
    struct Employee e[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Enter employee id: ");
        scanf("%d", &e[i].empid);

        printf("Enter employee name: ");
        scanf("%s", e[i].ename);

        printf("Enter employee salary: ");
        scanf("%f", &e[i].esalary);

        printf("Enter department: ");
        scanf("%s", e[i].edip);

        printf("Enter role: ");
        scanf("%s", e[i].erole);
    }

    printf("\nEmployee Details\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Id: %d\n", e[i].empid);
        printf("Name: %s\n", e[i].ename);
        printf("Salary: %.2f\n", e[i].esalary);
        printf("Department: %s\n", e[i].edip);
        printf("Role: %s\n", e[i].erole);
    }

    return 0;
}