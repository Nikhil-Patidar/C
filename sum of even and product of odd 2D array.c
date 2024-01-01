// WAP TO PRINNT SUM OF EVEN NUMBER AND PRODUCT OF ODD NUMBER
#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0,pro=1;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("ENTER VALUE OF 2D ARRAY=");
		scanf("%d",&a[i][j]);
	}
	printf("\n 2D ARRAY ELEMENTS ARE:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if(a[i][j]%2==0)
		sum=sum+a[i][j];
		else
		pro=pro*a[i][j];
	}
	return 0; 
		
}

















