#include<stdio.h>
#include<string.h>
int main()
{
	char s2[30];
	char s1[30];
	printf("\n ENTER YOUR STRING");
	fgets(s2,sizeof(s2),stdin);
	strcpy(s1,s2);
	printf("STRING S1 IS %s",s1);
	
}
