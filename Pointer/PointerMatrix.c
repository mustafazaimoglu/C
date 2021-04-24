#include<stdio.h>
#include <stdlib.h>

int main()
{
	char **a;
	
	a = (char**) calloc(3 , sizeof(char*));
	a[0] = (char*) malloc(5 * sizeof(char));
	a[1] = (char*) malloc(1 * sizeof(char));
	a[2] = (char*) malloc(1 * sizeof(char));
	
	a[0][0] = 'a';
	a[0] = (char*) realloc(a[0],3 * sizeof(char));
	a[0][1] = '5';
	a[0][2] = '6';
	a[0][3] = '7';
	a[1][0] = 'b';
	a[1][1] = 'c';
	a[1][2] = 'd';
	a[2][0] = 'e';
	a[2][1] = 'f';
	
	printf("%c ",a[0][0]);
	printf("%c ",a[0][1]);
	printf("%c ",a[0][2]);
	printf("%c ",a[0][3]);
	printf("%c ",a[1][0]);
	printf("%c ",a[1][1]);
	printf("%c ",a[1][2]);
	printf("%c ",a[1][3]);
	printf("%c ",a[1][4]);
	printf("%c ",a[2][0]);
	printf("%c ",a[2][1]);
	printf("\nasdasd");
}