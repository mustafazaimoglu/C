#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (){
	int w,a,s,e;
	
	printf ("1.Degeri Giriniz : ");
	scanf ("%d", &a);
	
	printf ("2.Degeri Giriniz : ");
	scanf ("%d", &s);
	
	for (w = 1; w <= a*s ; w += 1 ){
		
		if (w % a == 0 && w % s == 0){
		
			printf ("OKEK : %d\n",w);
			w = a*s;
			
		}
		
	}
	if (a > s){
		e = a;
	}
	else {
		e = s;
	}
	for (w = e ; w >= 1 ; w -= 1){
		if (a % w == 0){
			
			if (s % w == 0){
				
				printf ("OBEB : %d", w);
				w = 1;
			}
		}
	}
	
	getch ();
	return 0;
}
