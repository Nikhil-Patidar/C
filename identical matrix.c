#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j,flag=0;
	printf("\n ENTER VALUE OF THE FIRST MATRIX IS:");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf("\n ENTER VALUE OF 2D ARRAY ELEMETS ARE:");
		scanf("%d",&a[i][j]);
	}
		printf("\n ENTER VALUE OF THE SECOND MATRIX IS:");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf("\n ENTER VALUE OF 2D ARRAY ELEMENTS ARE:");
		scanf("%d",&b[i][j]);
	}
	printf("\n FIRST MATRIX IS:\n");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		printf("%d\t",a[i][j]);
	}
	printf("\n FIRST SECOND IS:\n");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		printf("%d\t",b[i][j]);
	}
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		if(a[i][j]!=b[i][j])
		flag=1;
	}
	if(flag==0)
	printf("\n MATRIX IS IDENTICAL");
	else
	printf("\n MATRIX IS NOT IDENTICAL");
	return 0;
}
