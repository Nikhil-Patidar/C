// add to number using function with pointer
// with argument no return type
 /*#include<stdio.h>
void add(int *,int *);
int main()
{
	int a,b,*p,*q;
	printf("ENTER FIRST NUMBER=");
	scanf("%d",&a);
	printf("ENTER SECOND NUMBER=");
	scanf("%d",&b);
	p=&a;
	q=&b;
	add(p,q);
	return 0;
}

void add(int *p,int *q)
{
	int sum=0;
	sum=*p+*q;
	printf("ADDITION OF TWO NUMBER=%d",sum);
} */

// wap to check even or odd function with pointer
#include<stdio.h>
void oddeven(int *);
int main()
{
	int a,*p;
	printf("ENTER NUMBER TO CHECK EVEN OR ODD=");
	scanf("%d",&a);
	p=&a;
	oddeven(p);
	return 0;
}
void oddeven(int *p)
{
	if(*p%2==0)
	printf("EVEN NUMBBER");
	else
	printf("ODD NUMBER");
}
