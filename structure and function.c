
// wap to  enployee structure read value and display value
// structure as fuction argument
#include<stdio.h>
struct employee
{
    int code;
    char name[10];
    float salary;
};
void display(struct employee); // fuction prototype 
int main()
{
    struct employee a;// variable declaration struct type
    // read value structure
    printf("\nENTER EMPLOYEE DETAILS");
    printf("\nENTER EMPLOYEE CODE=");
    scanf("%d",&a.code);
    printf("\nENTER EMPLOYEE NAME=");
    scanf("%s",&a.name);
    printf("\nENTER EMPLOYEE SALARY=");
    scanf("%f",&a.salary);
    display(a);
    return 0;
}
void display(struct employee x) // copy of variabe aa to x
{
	printf("\nDISPLAY EMPLOYEE DETAILS");
    printf("\nCODE=%d",x.code);
    printf("\nNAME=%s",x.name);
    printf("\nsalary=%f",x.salary);
}
