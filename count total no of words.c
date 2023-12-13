// wap to count no of words in string

/*#include<stdio.h>
int main()
{
	char a[100];
	int i,word=1;
	printf("\nENTER YOUR NAME:");
    fgets(a,sizeof(a),stdin);
	i=0;
	while(a[i]!='\0')
	{
	if(a[i]==' ')
	word++;
	i++;
	}
	printf("\n NUMBER OF WORDS=%d",word);
	return 0;
}*/


#include<stdio.h>
int main()
{
	char a[100];
	int i,word=1;
	printf("\nENTER YOUR NAME:");
    fgets(a,sizeof(a),stdin);
	i=0;
	while(a[i]!='\0')
	{
	if(a[i]==' ' && a[i+1]!=' ')
	word++;
	i++;
	}
	printf("\n NUMBER OF WORDS=%d",word);
	return 0;
}
