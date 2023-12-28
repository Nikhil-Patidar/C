#include<stdio.h>
int main()
{
	int a[5],i,j,t;
	for(i=0;i<5;i++)
	{
		printf("ENTER THE NUMBER=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	for(j=i;j<5;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	printf("ARRAY AFTER SORTING IS\n");
	for(i=0;i<5;i++)
	printf("\n%d",a[i]);
	return 0;
}
