 // defference between structure and union
 
 
 /*#include<stdio.h>
struct employee
{
	int code;
	char name[50];
	float salary;
}a;
int main()
{
    	printf("SIZE OF A IN BYTE=%lu",sizeof(a));
	    return 0;

}  */
/*
// uion program
#include<stdio.h>
union employee
{
	int code;
	char name[50];
	float salary;
}a;
int main()
{
    	printf("SIZE OF A IN BYTE=%ld",sizeof(a));
	    return 0;

} */


// uion program
#include<stdio.h>
union employee
{
	int code;
	char name[50];
	float salary;
}a;
int main()
{
		printf("\nENTER EMPLOYEE DETAILS");
    	printf("\nENTER CODE=");
    	scanf("%d",&a.code);
    	printf("\nCODE=%d",a.code);
    	printf("\n ENTER NAME=");
    	scanf("%s",&a.name);
    	printf("\nNAME=%s",a.name);
    	printf("\nENTER SALARY=");
    	scanf("%f",&a.salary);	
    	printf("\nSALARY=%f",a.salary);
	    return 0; 
} 
	
