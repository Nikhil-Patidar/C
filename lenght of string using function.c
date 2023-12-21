 // IT RETURNS THE LENGTH OF THE STRING WITHOUT INCLUDING END CHARACTER(TERMINATING CHAR '\0")
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("\n ENTER YOUR STRING:");
	fgets(str,sizeof(str),stdin);
	printf("LENGTH OF STRING IS=%d",strlen(str));
	return 0;	
}

