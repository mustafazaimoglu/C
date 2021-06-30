#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (){
	int a,s,d,x,f;
	
	printf ("Lurfen Bir Sayi Giriniz (Sayi 100`den Kucuk Olmali) : ");
	scanf ("%d", &x);
	
	for (a=1 ; a <= x ; a++){
		s = a % 10;
		d = (a-s)/10 % 10;
		f = s + d;
		if (f % 2 == 1 ){
			printf ("%d \n",a);
		}
	}
	
	
	getch ();
	return 0;
}
// MKZ
