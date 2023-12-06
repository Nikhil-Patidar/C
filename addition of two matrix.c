#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j,c[2][2];
	printf("\n ENTER VALUE OF FIRST MATRIX:");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf("\n ENTER VALUE OF 2D ARRAY:");
		scanf("%d",&a[i][j]);
	}
	printf("\n ENTER VALUE OF SECOND MATRIX:");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf("\n ENTER VALUE OF 2D ARARY:");
		scanf("%d",&b[i][j]);
	}
	printf("\n FIRST MATRIX IS:");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++);
		printf("%d \t",a[i][j]);
	}
	printf("\n SECOND MATRIX IS:");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		printf("%d \t",b[i][j]);
	}
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	c[i][j]=a[i][j]+b[i][j];
	printf("\n ADDITION OF TWO MATRIX IS:");
	for(i=0;i<2;i++)
	{
	printf("\n");
	for(j=0;j<2;j++)
	printf("%d \t",c[i][j]);
	}
	return 0;
	
}
