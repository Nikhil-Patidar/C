#include<stdio.h>
int main()
{
	int i,n,b,j;
	printf("ENTERT THE NUMBER ROWS\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n");
		b=1;
		while(b<=n-i)
		{
			printf("-");
			b++;
		}
		j=1;
		while(j<=i*2-1)
		{
			printf("*");
			j++;
		}
		i++;
	}
return 0;
} 

/*#include<stdio.h>
int main()
{
	int i,n,b,j;
	printf("ENTERT THE NUMBER ROWS\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n");
		b=1;
		while(b<=n-i)
		{
			printf("-");
			b++;
		}
		j=1;
		while(j<=i*2-1)
		{
			printf("%d",i);
			j++;
		}
		i++;
	}
return 0;
} */



/*#include<stdio.h>
int main()
{
	int i,n,b,j;
	printf("ENTERT THE NUMBER ROWS\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n");
		b=1;
		while(b<=n-i)
		{
			printf("-");
			b++;
		}
		j=1;
		while(j<=i*2-1)
		{
			printf("%d",j);
			j++;
		}
		i++;
	}
return 0;
}  */
