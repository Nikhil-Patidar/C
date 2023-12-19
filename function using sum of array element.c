// write a function to find sume of array elements
// withe argument no return type
/*#include<stdio.h>
void arrayadd(int [],int);
int main()
{
    int a[100],size,i;
    printf("Enter size of array=");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter array elements are=");
        scanf("%d",&a[i]);
    }
    arrayadd(a,size);
    return 0;
}
void arrayadd(int a[],int size)
{
    int sum=0,i;
    for(i=0;i<size;i++)
    sum=sum+a[i];
    printf("\n SUM OF ARRAY ELEMENT=%d",sum);
} */

// write a function to find sume of array elements
// withe argument with return type
#include<stdio.h>
int arrayadd(int [],int);
int main()
{
    int a[100],size,i,val;
    printf("Enter size of array=");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter array elements are=");
        scanf("%d",&a[i]);
    }
    val=arrayadd(a,size);
     printf("\n SUM OF ARRAY ELEMENT=%d",val);
    return 0;
}
int arrayadd(int a[],int size)
{
    int sum=0,i;
    for(i=0;i<size;i++)
    sum=sum+a[i];
   return(sum);
}
