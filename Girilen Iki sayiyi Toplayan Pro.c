#include<stdio.h>
#include<conio.h>

int main () {
	long a,b,c;
	
	printf("Lutfen bir sayi giriniz : ");
	scanf ("%d", &a);
	
	printf("Lutfen bir sayi daha giriniz : ");
	scanf ("%d", &b);

	c = a + b;
	
	printf ("Bu iki sayinin toplami = %d",c);
	
	return 0;
}
