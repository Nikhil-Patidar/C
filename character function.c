#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("\n ENTER AN ALPHABET:");
	scanf("%c",&ch);
	if(isalpha(ch))
	printf("\n THE CHARACTER IS AN ALPHABET:");
	else
	printf("\n THE CHARACTER IS AN  NOT ALPHABET:");
	if(isdigit(ch))
	printf("\n THE CHARACTER IS AN DIGIT:");
	else
	printf("\n THE CHARACTER IS AN NOT DIGIT:");
	if(isalnum(ch))
	printf("\n THE CHARACTER IS EITHER AN ALPHABET OR A DIGIT");
	else
	printf("\n THE CHARACTER IS NEITHER AN ALPHABET NOT A DIGIT");
	if(isspace(ch))
	printf("\n THE CHARACTER IS A SPACE");
	else
	printf("\n THE CHARACTER IS NOT A SPACE");
	if(islower(ch))
	printf("\n THE CHARACTER IS A LOWER CASE ALPHABET");
	else
	printf("\n THE CHARACTER IS NOT A LOWER CASE ALPHABET");
	if(isupper(ch))
	printf("\n THE CHARACTER IS A UPPER CASE ALPHABET");
	else
	printf("\n THE CHARACTER IS NOT A UPPER CASE ALPHABET");
	printf("\n THE CHARACTER IN LOWER CASE=%c",tolower(ch));
	printf("\n THE CHARACTER IN UPPER CASE=%c",toupper(ch));
	return 0;
}
