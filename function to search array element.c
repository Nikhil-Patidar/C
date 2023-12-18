// wap to search number array using function
// with argument no return
#include<stdio.h>
void search(int [],int,int);  // function prototype
int main()
{
    int a[100],size,i,key;
    printf("ENTER SIZE OF ARRAY ELEMENT=");
    scanf("%d",&size);
    for(i=0;i<size;i++)
{
    printf("ENTER ARRAY ELEMNETS ARE=");
    scanf("%d",&a[i]);
}
printf("\nENTER NUMBER TO SEARCH=");
scanf("%d",&key);
search(a,size,key);  // function calling
return 0;

}
void search(int a[],int size,int key)   //function defination
{
    int i,flag=0,pos;
    for(i=0;i<size;i++)
    {
        if(a[i]==key)
        {
        flag=1;
        pos=i+1;
        break;
        }
    }
    if(flag==1)
    printf("NUMBER AT FOUND POSITION=%d",pos);
    else
    printf("NUMBER NOT FOUND");
    
}
