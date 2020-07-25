#include<stdio.h>
#include<conio.h>

int main () {
	int a;
	
	printf ("Lutfen bir sayi giriniz \n");
	scanf ("%d", &a);
	
	if (a == 0) {
		printf ("Sayi Sifirdir");
	}
	else if (a > 0)  {
		printf ("Sayi Pozitiftir");
	}
	else {
		printf ("Sayi Negatiftir");
	}
	
	getch ();
	return 0;
}
