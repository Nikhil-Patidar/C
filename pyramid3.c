#include<stdio.h>
int main()
{
	int i,j,n,b;
	printf("ENTER THR NUMBER\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n");
		b=1;
		while(b<i)
		{
			printf(" - ");
			b++;
			j=1;			
		}
		while(j<=n+1-i)
		{
			printf(" * ");
			j++;
		}
		i++;
		
	}
	return 0;
}



/*#include<stdio.h>
int main()
{
	int i,j,n,b;
	printf("ENTER THR NUMBER\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n");
		b=1;
		while(b<i)
		{
			printf("-");
			b++;
			j=1;			
		}
		while(j<=n+1-i)
		{
			printf("%d",j);
			j++;
		}
		i++;
		
	}
	return 0;
} */


/*#include<stdio.h>
int main()
{
	int i,j,n,b;
	printf("ENTER THR NUMBER\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n");
		b=1;
		while(b<i)
		{
			printf("-");
			b++;
			j=1;			
		}
		while(j<=n+1-i)
		{
			printf("%d",i);
			j++;
		}
		i++;
		
	}
	return 0;
} */
