	// WAP TO FIND MAX ELEMENT IS AN ARRAY

#include<stdio.h>
int main()
{
	int a[5],i,max;
	for(i=0;i<5;i++)
	{
		printf("ENTER THE NUMBER=");
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<5;i++)
	if(a[i]>max)
	max=a[i];
	printf("MAX NUMBER IS=%d",max);
	return 0;
	
}
