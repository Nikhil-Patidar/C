
//WAP TO PRINT ROW WISE SUM OF A 2D ARRAY
#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum;
	for(i=0;i<3;i++)	
	for(j=0;j<3;j++)
	{
	printf("ENTER VALUE OF 2D ARRAY=");
	scanf("%d",&a[i][j]);
	}
	printf("\n 2D ARRAY ELEMENTS ARE");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	}
	for(i=0;i<3;i++)
	
	{
		sum=0;
		for(j=0;j<3;j++)
		sum=sum+a[j][i];
		printf("\nSUM OF ROW %d is %d",i+1,sum);
	}
	

for(i=0;i<3;i++)
	
	{
		sum=0;
		for(j=0;j<3;j++)
		sum=sum+a[i][j];
		printf("\nSUM OF COLUMN %d is %d",i+1,sum);
	}
	return 0;		
}

