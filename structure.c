#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char name[30];
    //int code;
    char deg[40];
    int empId;
    float salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf(" Enter Employee Name:=");          
    //gets(emp.name);
    //scanf("%s",&emp.name);
    fgets(emp.name,sizeof(emp.name),stdin);
   
    printf("\nEnter Employee Designation:=");
    fgets(emp.deg,sizeof(emp.deg),stdin);
    printf("ID:=");            
    scanf("%d",&emp.empId);
    printf("Salary:=");        
    scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:=");
    printf("\nName=%s",emp.name);
   
    printf("\nDesignation=%s",emp.deg);
    printf("\nId= %d",emp.empId);
    printf("\nSalary= %f",emp.salary);
    return 0;
}
