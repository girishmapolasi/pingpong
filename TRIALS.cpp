#include<stdio.h>
//#include<ctype.h>

int main()
{
	char TestChar;
	printf("\n Check whether a character is digit or not :\n");  
    printf("----------------------------------------------\n");      
    printf(" Input a character : ");
    scanf( "%c", &TestChar );
	if( isdigit(TestChar) )
		printf( " The entered character is a digit. \n\n" );
	else
		printf( " The entered character is not a digit. \n\n" );
	return 0;
}

