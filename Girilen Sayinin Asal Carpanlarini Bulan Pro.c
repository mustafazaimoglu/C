#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main () {
	
	int a,i,b,c=0;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d" , &a);
	b = a;
	
	for (i=2 ; i <= a ; i++ ){
		
		c = c + 1;
		
		if  (a % i == 0){
			
			printf ("%d \n", i);
			
			a = a/i;
			
			i = i - 1;
		}
		
	}
	printf ("Sayilari %d Sayisinin Asal Carpanlaridir.\n",b);
	printf ("ISLEM SAYISI : %d" ,c );
	getch ();
	return 0;
}
