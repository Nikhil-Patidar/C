// array of structure
// wap to print value of 10 employee using array of structure and search value exect position
#include<stdio.h>

struct employee
{
    char name[20];
    int code;
    int salary;
};

int main()
{
    struct employee a[2];
    int i,flag=0,pos,key;
    //Accepting information
    printf("Enter details of 5 employees:\n");
    for(i=0;i<2;i++)
    {
        printf("Enter name :");
        scanf("%s", &a[i].name);
        printf("Enter code :");
        scanf("%d", &a[i].code);
        printf("Enter salary :");
        scanf("%d", &a[i].salary);
    }
    //displaying information
    
   
        printf("ENTER EMPLOYEE CODE TO SEARCH=");
        scanf("%d",&key);
         for(i=0;i<10;i++)
        {
            if(a[i].code==key)
            {
                flag=1;
                pos=i;
                break;
            }
            
        }
    
    if(flag==1)
    {
         printf("\nNAME=%s",a[i].name);
        printf("\nCODE=%d",a[i].code);
       
        printf("\nSALARY=%d",a[i].salary);
    }
    else
    printf("\n SEARCH VALUE NOT FOUND");
    return 0;
  
}

