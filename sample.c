#include <stdio.h>

int main(){

int emp_id;
char emp_name[20];

FILE *fptr;

fptr = fopen( "sample.txt", "w" );

	printf("Enter Employee ID :");
	scanf("%d", &emp_id);

	printf("Enter Employee Name :");
	scanf("%s", &emp_name);

fprintf( fptr, "%d, %s", emp_id, emp_name ) ;

fclose(fptr);

return 0;
}
