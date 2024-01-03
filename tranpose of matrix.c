/*#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("\nENTER VALUE OF THE MATRIX:");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\n ENTER VALUE OF 2D ARRAY:");
		scanf("%d",&a[i][j]);
	}
	printf("\n THE ORIGINAL MATRIX IS:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	}
	printf("\n TRANSPOSE OF THE MATRIX:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[j][i]);
	}
	return 0;
} */


#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j;
	printf("\nENTER THE VALUE OF THE MATRIX:");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\n ENTER VALUE OF 2D ARRAY:");
		scanf("%d",&a[i][j]);
	}
	printf("\n ORIGINAL MATRIX IS:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	b[i][j]=a[i][j];
	printf("\nTRANSPOSE OF THE MATRIX:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",b[j][i]);
	}
	return 0;
}


