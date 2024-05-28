#include<stdio.h>
int main()
{
	int i,sum=0,x;
	printf("ENTER NUMBER TO CHECK ARMSTRON=");
	scanf("%d",&i);
	x=i;
	while(i>0)
	{
		sum=sum+(i%10)*(i%10)*(i%10);
		i=i/10;
	}
	if(sum==x)
	printf("ARMSTRONG NUMBER");
	else
	printf("NOT ARMSTRONG NUMBER");
	return 0;
}

