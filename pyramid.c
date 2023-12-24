#include<stdio.h>
int main()

{
    int i,j,n,b;
    i=1;
     
    printf("Enter the number\n");
    scanf("%d",&n);
    while(i<=n)
    {
      b=1;
      printf("\n");
    while(b<=n-i)
      {
          printf("-");
          b++;
      }
      j=1;
    
      while(j<=i)
      {
          printf("*");
          j++;
      }
      i++;
    }
    return 0;
}
