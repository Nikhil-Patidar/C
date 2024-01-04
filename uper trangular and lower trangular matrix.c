#include<stdio.h>
int main()
{
	int a[2][2],i,j,flag=0;
	printf("\n ENTER VALUE OF THE  MATRIX IS:");
	for(i=2;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf("\n ENTER VALUE OF 2D ARRAY ELEMENTS ARE:");
		scanf("%d",&a[i][j]);
	}
	printf("\n THE MATRIX IS:");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		printf("%d\t",a[i][j]);		
	}
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
	if(i>j && a[i][j]!=0)
	{
		flag=1;
		break;
	}
	}
	if(flag==1)
	printf("\n NOT UPER TRINGULAR MATRIX");
	else
	printf("\n UPER TRINGULAR MATRIX");
	
}
