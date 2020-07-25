#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main (){
	int n,t;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&n);
	
	t = fak(n);
	
	printf ("Girilen Sayinin Faktoriyeli : %d",t);
	
	getch ();
	return 0;
}

int fak (x) {
	int i,m=1;
	 
	for (i = 1 ; i <= x ; i += 1){
		m = m * i;
	}
	
	return m;
}






