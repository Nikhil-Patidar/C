#include<stdio.h>
int main()
{
	int a[10],i,flag=0,key,pos;
	for(i=0;i<10;i++)
	{
		printf("ENTER THE NUMBER=");
		scanf("%d",&a[i]);
	}
	printf("ENTER THE NUMBER TO SEARCH:=");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(a[i]==key)
		{
			pos=i+1;
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("\nNUMBER FOUND AT POSITION=%d",pos);
	else
	printf("\n NUMBER NOT FOUND:");
	return 0;
}
