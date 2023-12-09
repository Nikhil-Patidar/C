/*
// call by value
#include<stdio.h>
void change(int);
void main()
{
	int a;
	printf("ENTER A NUMBER=");
	scanf("%d",&a);
	printf("\n VALUE OF A BEFORE FUNCTION CALL=%d",a);
	change(a);
	printf("\n VALUE OF A AFTER FUNCTION CALL=%d",a);
}
change(int a)
{
	a=a+10;
	printf("\nVALUE OF A=%d",a);
	
} */

// call by reference
#include<stdio.h>
void change(int *);
void main()
{
	int a,*p;
	printf("ENTER A NUMBER=");
	scanf("%d",&a);
	printf("\n VALUE OF A BEFORE FUNCTION CALL=%d",a);
	p=&a;
	change(p);
	printf("\n VALUE OF A AFTER FUNCTION CALL=%d",a);
}
change(int *p)
{
	*p=*p+10;
	printf("\nVALUE OF p=%d",*p);
	
}
