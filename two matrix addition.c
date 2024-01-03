#include <stdio.h>

void main()
{
  int a[2][2],b[2][2],c[2][2],i,j;
  
       
       
        printf("\nEnter value of first matrix is:");
       for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
	           printf("\nEnter value of 2D ARRAY IS:=");
	           scanf("%d",&a[i][j]);
            }
        }   
  
       printf("\nEnter value second matrix is:");
       for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
	           printf("\nEnter value of 2D array is:=");
	           scanf("%d",&b[i][j]);
            }
        }    
   printf("\nThe First matrix is :");
  for(i=0;i<2;i++)
    {
      printf("\n");
      for(j=0;j<2;j++)
           printf("%d\t",a[i][j]);
    }
  
  printf("\nThe Second matrix is :");
  for(i=0;i<2;i++)
    {
      printf("\n");
      for(j=0;j<2;j++)
      printf("%d\t",b[i][j]);
    }
   
   for(i=0;i<2;i++)
       for(j=0;j<2;j++)
            c[i][j]=a[i][j]+b[i][j];
   printf("\nThe Addition of two matrix is :");
   for(i=0;i<2;i++){
       printf("\n");
       for(j=0;j<2;j++)
            printf("%d\t",c[i][j]);
   }
   printf("\n\n");
}
