 // no argument no return type
 /*#include<stdio.h>
#include<conio.h>

void sum(void);  // function prototype
int main()
{
sum();  // function calling
return 0;
}

void sum(void)  // function defination
{
int sum=0,a,b;
printf("Enter first number=");
scanf("%d",&a);
printf("Enter second number=");
scanf("%d",&b);
sum=a+b;
printf("Sum=%d",sum);
}  */

// with argument no retun type
/*#include<stdio.h>
#include<conio.h>
void add(int,int); // prototype
int main()
{
    int a,b;
    printf("Enter first number=");
    scanf("%d",&a);
    printf("Enter second number=");
    scanf("%d",&b);
    add(a,b);   // calling
    return 0;
}
void add(int a,int b)  // defination
{
    int sum=0;
    sum=a+b;
    printf("Sum=%d",sum);
} */

// no asrgument with return
  /*#include<stdio.h>
int add(void) // defination
{
    int a,b,c;
    printf("Enter first number=");
    scanf("%d",&a);
    printf("Enter second number=");
    scanf("%d",&b);
    c=a+b;
    return(c);
}
int add(void); //prototype
int main()
{
    int sum=0;
    sum=add();  // functoin calling
    printf("Sum=%d",sum);
    return 0;
    
} */
// with argument with return
#include<stdio.h>
int add(int,int); // function prototype
int main()
{
    int a,b,sum=0;
    printf("Enter first number=");
    scanf("%d",&a);
    printf("Enter second number=");
    scanf("%d",&b);
    sum=add(a,b);// function calling
    printf("ADDITION OF TWO NUMBER=%d",sum);
    return 0;
}
int add(int a,int b) // function defination 
{
    int c;
    c=a+b;
    return(c);
}
