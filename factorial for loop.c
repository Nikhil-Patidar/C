#include<stdio.h>
int main()
{
	int i,fac=1;
	printf("ENTER THE NUMBER\n");
	scanf("%d",&i);
	for(i=1;i>0;i++)
	fac=fac*i;
	printf("%d=",fac);
	return 0;
}
