#include<stdio.h>
int main()
{
	int n,x=0,y=1,sum=0;
	printf("ENTER THE MAX LIMIT NUMBER=");
	scanf("%d",&n);
	while(sum<=n)
	{
		printf("%d\n",sum);
		x=y;
		y=sum;
		sum=x+y;
	}
	return 0;
}
