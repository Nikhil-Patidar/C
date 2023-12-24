#include<stdio.h>
int main()
{
	FILE2 *fp;
	fp=fopen("FILE2.exe","w");
	if(fp==NULL)
	{
		printf("same error occured...");
		return 0;
	}
	fputc("hello to the world of file handling using PUTS:",fp);
	fclose(fp);
	printf("file created successfully.....");
	return 0;
}
