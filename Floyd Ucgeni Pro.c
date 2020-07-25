#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main () {
	int i,j,t,c;
	c = 0;
	printf ("Lutfen Kac Satirdan Olusacagini Giriniz : ");
	scanf ("%d", &t);
	for (i = 1 ; i <= t; i++ ){
		
		for (j = 1 ; j <= i ; j++){
			
			c = c + 1;
			
			printf ("%d ",c);
		}
		printf ("\n");
	}
		
	getch ();
	return 0;
}
