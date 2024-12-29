#include<stdio.h>
#include<string.h>
int main()
{
    char city1[20]="Ratlam";
    char city2[20]={"Indore"};
    char city3[]="Bhopal";
    char city4[20]={'J','h','a','b','u','a','\0'};
    char city5[]={'B','a','d','n','a','w','a','r','\0'};
    char city6[20];
    strcpy(city6,"Nagda");
    char city7[20];
    city7[0]='G';
    city7[1]='u';
    city7[2]='j';
    city7[3]='r';
    city7[4]='a';
    city7[5]='t';
    city7[6]='\0';

    printf("%s\n%s\n%s\n%s\n%s\n%s\n%s",city1,city2,city3,city4,city5,city6,city7);

    return 0;
}