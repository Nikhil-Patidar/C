/* #include<stdio.h>
int main()
{
	int a[3][3],i,j,flag=0;
	printf("\n ENTER VALUE OF THE  MATRIX IS:");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\n ENTER VALUE OF 2D ARRAY ELEMENTS ARE:");
		scanf("%d",&a[i][j]);
	}
	printf("\n THE MATRIX IS:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);		
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
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
	return 0;
	
}*/


#include<stdio.h>
int main()
{
	int a[3][3],i,j,flag=0;
	printf("\n ENTER VALUE OF THE  MATRIX IS:");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\n ENTER VALUE OF 2D ARRAY ELEMENTS ARE:");
		scanf("%d",&a[i][j]);
	}
	printf("\n THE MATRIX IS:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);		
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	if(j>i && a[i][j]!=0)
	{
		flag=1;
		break;
	}
	}
	if(flag==1)
	printf("\n NOT LOWER TRINGULAR MATRIX");
	else
	printf("\n LOWER TRINGULAR MATRIX");
	return 0;
	
}


