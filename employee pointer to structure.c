// pointer to structure program  using function with argument no return type
#include<stdio.h>
struct employee
{
    int code;
    char name[20];
    float salary;
};
void display(struct employee *); // function prototype
int main()
{
    struct employee a; // variable declaration in structure
    printf("\n ENTER EMPLOYEE ALL DETAILS");
    printf("\nENTER EMPLOYEE CODE=");
    scanf("%d",&a.code);
    printf("\n ENTER EMPLOYEE NAME=");
    scanf("%s",&a.name);
    printf("\n ENTER EMPLOYEE SALARY=");
    scanf("%f",&a.salary);
    display(&a);// function calling 
    return 0;
}
void display(struct employee *a)
{
	printf("\n DISPLAY EMPLOYEE ALL vDETAILS");
    printf("\nCODE=%d",a->code);
    printf("\nNAME=%s",a->name);
    printf("\nSALARY=%f",a->salary);
    
}
