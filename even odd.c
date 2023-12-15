/*#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	if(a%2==0)
	{
		printf("EVEN NUMBER=a",a);
	}
	else
	printf("ODD NUMBER=b",b);
	return 0;
}	*/

		// wap to check numbers positive on nagative or not
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	if(a>0)
	printf("POSITIVE NUMBER");
	else if(a<0)
	printf("NEGATIVE NUMBER");
	else
	printf("NUMBER IS ZERO");
	return 0;
}
