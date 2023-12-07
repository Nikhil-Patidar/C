//	PROGRAM TO PRINT ALTERNATE ELEMENTS OF THE ARRAY
#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("ENTER THE NUMBER=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i=i+2)
	printf("%d\n",a[i]);
	return 0;	
}
