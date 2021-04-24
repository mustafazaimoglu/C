#include<stdio.h>

int main()
{
	char x = '6';
	char y = '4';
	short a = ((int) (x - 48)) * 10 + ((int) (y - 48));
	short b = 75;
	
	printf("%d",a);
}