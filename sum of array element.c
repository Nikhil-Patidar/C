#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("ENTER THE NUMBER=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	sum=sum+a[i];
	printf("SUM OF ARRAY ELEMENTS ARE=%d",sum);
	return 0;
}
