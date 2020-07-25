#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main () {
	double n,i,t;
	
	t = 1;
	
	printf("Faktoritelini Almak Istadiginiz Sayiyi Giriniz \n");
	
	scanf("%lf" ,& n);
	
	for (i=n ; i >= 1 ; i--) 
	{
		t = t * i;
	}
	
	printf ("Faktoriyel %.0lf Sayisi Esittir : %.0lf", n , t );

	getch ();
	return 0;
}
