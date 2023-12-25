

#include<stdio.h>
int main()
{
	int n,i;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&n);
	while(n>0)
	{
		printf("\n");
		i=1;
		while(i<=n)
		{
			printf(" * ");
			i++;
		}
		n=n-1;
		
		
	}
	return 0;
}


/*#include<stdio.h>
int main()
{
	int n,i;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&n);
	while(n>0)
	{
		printf("\n");
		i=1;
		while(i<=n)
		{
			printf("%d\t",i);
			i++;
		}
		n=n-1;
		
		
	}
	return 0;
} */




/*#include<stdio.h>
int main()
{
	int n,i,x=1;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&n);
	while(n>0)
	{
		printf("\n");
		i=1;
		while(i<=n)
		{
			printf("%d\t",x);
			i++;
		}
		n=n-1;
		x=x+1;
		
	}
	return 0;
} */
