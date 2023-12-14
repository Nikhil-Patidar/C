// ACCEPT AND DISPLAY A 3*3 MATRIX
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	for	(i=0;i<3;i++)
	for	(j=0;j<3;j++)
	{
		printf("\nENTER VALUE OF 2D ARRAY:");
		scanf("%d",&a[i][j]);
	}
	printf("\n2D ARRAY ELEMENTS ARE:");
	for	(i=0;i<3;i++)
	{
		printf("\n");
		for	(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	}
	return 0;

}
