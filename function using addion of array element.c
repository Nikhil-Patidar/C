//wap to add two matrix using function
// with argument no return type
#include<stdio.h>
void addmat(int [][10],int [][10],int,int);
int main()
{
	int a[10][10],b[10][10],rows,column,i,j;
	printf("ENTER NO OF ROWS=");
	scanf("%d",&rows);
	printf("ENTER NO OF COLUMN=");
	scanf("%d",&column);
	for(i=0;i<rows;i++)
	for(j=0;j<column;j++)
	{
		printf("ENTER NUMBER=");
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<rows;i++)
	for(j=0;j<column;j++)
	{
		printf("ENTER NUMBER=");
		scanf("%d",&b[i][j]);
	}
	addmat(a,b,rows,column);
	return 0;
}
void addmat(int a[][10],int b[][10],int rows,int column)
{
	int c[10][10],i,j;
	for(i=0;i<rows;i++)
	for(j=0;j<column;j++)
	c[i][j]=a[i][j]+b[i][j];
	printf("\n ADDITION OF TWO MATRIX=");
	for(i=0;i<rows;i++)
	{
	printf("\n");
	for(j=0;j<column;j++)
	printf("%d\t",c[i][j]);
	}
}


