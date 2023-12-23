/*#include<stdio.h>
int main()
{
	int a,b;
	a=5;
	b=10;
	printf("\n ADDRESS OF a=%x",&a);
	printf("\n ADDRESS OF b=%y",&b);
	printf("%d\n VALUE OF a=%d",a);
	printf("%d\n VALUE OF b=%d",b);
	return 0;
} */

 /* #include<stdio.h>
  int main()
  {
      int a,b,c,*p,*q;
      printf("ENTER FIRST NUMBER=");
      scanf("%d",&a);
      printf("ENTER SECOND NUMBER=");
      scanf("%d",&b);
      p=&a;
      q=&b;
      c=*p+*q;
      printf("\n ADDITION OF TWO NUMBER=%d",c);
      return 0;
  }  */
  
  // PROGRAM TO CHECK EVEN/ ODD BNUMBER
/*  
#include<stdio.h>
int main()
{
    int a,*p;// p is a pointer variable
    printf("ENTER NUMBER TO CHECK EVEN OR ODD=");
    scanf("%d",&a);
    p=&a; // P STORE THE ADDRESS OF A
    if(*p%2==0)// *P IS IS A VALUE
    printf("\n EVEN NUMBER");
    else
    printf("\n ODD NUMBER");
    return 0;
} */

#include<stdio.h>
int main()
{
    int n,*p,i,count;
    printf("ENTER NUMBER TO CHECK PRIME OR NOT=");
    scanf("%d",&n);
    p=&n;
    for(i=1;i<=*p;i++)
    {
        if(*p%i==0)
        count++;
    }
    if(count==2)
    printf("\n PRIME NUMBER");
    else
    printf("\n NOT PRIME NUMBER");
    return 0;
    
   }
