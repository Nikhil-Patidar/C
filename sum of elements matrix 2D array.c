// WAP TO PRINT SUM OF ELEMENTS 3*3 MATRIX
#include<stdio.h>
int main()
{
	 int a[3][3],i,j,sum=0;
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
	 for(j=0;j<3;j++)
	 sum=sum+a[i][j];
	 printf(" \nSUM OF 2D ARRAY=%d",sum);
	 return 0; 	
}







