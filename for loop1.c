/*#include<stdio.h>
int main()
{
	int i;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&i);
	for(i=1;i<=11;i++)
	{
		printf("value of i=%d\n",i);
	}
	return 0;
} */

		// SUM OF FIRST N NATURAL NUMBERS
	#include<stdio.h>
	int main()
	{
		int i,num,sum=0;
		printf("ENTER THE NUMBER \n");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{
			sum=sum+i;	
		}	
		printf("sum=%d",sum);
		return 0;
	}
	
	
	
		
