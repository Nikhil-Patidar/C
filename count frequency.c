#include<stdio.h>
int main()
{
	int a[10],i,freq=0,key;
	for(i=0;i<10;i++)
	{
		printf("ENTER THE NUMBER=");
		scanf("%d",&a[i]);
	}	
	printf("ENTER NUMBER TO FIND FREQUENCY:=");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	if(a[i]==key)
	freq++;
	printf("FREQUENCY OF %d is %d",key,freq);
	return 0;
}
