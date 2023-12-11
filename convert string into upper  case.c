// this function convert the string into upper case using strupr functoin

 /*#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	printf("ENTER STRING IN LOWER CASE=");
	fgets(a,sizeof(a),stdin);
	printf("\n STRING IN UPPER  CASE=%s",strupr(a));
	return 0;
		
}  */

// convert string upper case without using function
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter your String Lower case:=");
    fgets(str,sizeof(str),stdin);
    int i=0;
    //convert small letter string to capital letter string
    while(str[i]!='\0')
    {
       //if(str[i]>96 && str[i]<123 )
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        i++;
    }
    printf("Upper case String is :%s",str);
}
