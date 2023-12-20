#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("ENTER THE NUMBER=");   //input of array elements
		scanf("%d",&a[i]);
	}
	printf("ARRAY ELEMENTS ARE=");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);    //output array elements
	}	
return 0;	
}
