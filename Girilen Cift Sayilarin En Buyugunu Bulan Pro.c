#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
	int a=-1,s,d,f;
	
	printf ("Kac Tane Sayi Girilecek : ");
	scanf ("%d",&s);
	
	for (d = 0 ; d < s ; d++){
		printf ("%d. Sayiyi Giriniz : ",d+1);
		scanf ("%d",&f);
		
		if (f % 2 == 0){
			if (f>a){
				a = f;
			}	
		}
	}
	
	if (a == -1){
		printf ("Cift Sayi Girmediniz!");
	}
	else{
		printf ("%d Girilen Sayilar Arasindan En Buyuk Cift Sayidir.",a);	
	}
	
	getch ();
	return 0;
}
