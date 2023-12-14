#include<stdio.h>
int main()
{
	int a[3][3],i,j,even,odd;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("ENTER 2D ARRAY ELEMENTS:=");
		scanf("%d",&a[i][j]);
	}
	printf("2D ARRAY ELEMENTS ARE");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	}
	even=odd=0;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if(a[i][j]%2==0)
		even++;
		else
		odd++;
	}
	printf("\nTOTAL EVEN NUMBER=%d and TOTAL ODD NUMBER=%d",even,odd);
	return 0;

}










