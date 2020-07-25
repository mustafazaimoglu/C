#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main (){
	int n,h,g,j,i;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d", &n);
	
	for (i = 1 ; i <= n ; i++){
		g = AsalKontrol(i);
		h = TersBul(i);
		j = AsalKontrol(h);
		
		if (g == 0 && j == 0){
			if (i > 10){
				printf ("%d - %d Aynali Asal Sayilardir\n",i,h);
			}
		}
		
	}
	getch ();
	return 0;
}

int AsalKontrol (a){
	int c=0,i;
	
	for (i = 2 ; i <= a-1 ; i++){
		if (a % i == 0){
			c = 1; 
		}	
	}
	return c;
}

int TersBul (int s){
	int sonuc,p;
	
	sonuc = 0;
	
	while (s > 0){
		p = s % 10;
		sonuc = (sonuc*10)+p;
		s = (s-p)/10;
	}
	
	return sonuc;
}
