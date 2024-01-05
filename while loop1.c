		//WAP TO PRINT 1 TO N NATURAL NUMBERS
/*
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("\nEnter the number=");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}					*/	

			//WAP TO PRINT 1 TO 10 EVEN NUMBERS
/*
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("\nEnter the value of n=");
	scanf("%d",&n);
	while(i<=10)
	{
		if(i%2==0)
		{
				printf("%d\n",i);
		}
	
		i++;
	}
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter the numbrs\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("\nsum=%d",sum);
	return 0;
}





					
