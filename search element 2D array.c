#include<stdio.h>
int main()
{
	int a[3][3],i,j,key;
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
	printf("\n ENTER NUMBER TO  SEARCH=");
	scanf("%d",&key);
	for(i=0;i<3;i++) 
	for(j=0;j<3;j++)
	{
		if(a[i][j]==key)
		{
			printf("\nELEMENT FOUND AT a[%d][%d] POSITION",i,j);
			return 0;
		}
	}	
		printf("\nE LEMENT NOT FOUND");
		return 0;
}
