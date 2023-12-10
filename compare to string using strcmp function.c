#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf(" ENTER YOUR FIRST STRING=");
	fgets(a,sizeof(a),stdin);
	printf(" ENTER YOUR SECOND STRING=");
	fgets(b,sizeof(b),stdin);
	if(strcmpi(a,b)==0)
	printf("\n EQUAL STRING");
	else if(strcmp(a,b)>0)
	printf("\n FIRST STRING IS GREATER");
	else
	printf("\n SECOND STRING IS GREATER");		
	return 0;
}
