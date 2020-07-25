#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main () {
	int n,a,i;
	float t;
	printf ("Kac Tane Sayinin Ortalamasi Alinacak? Lutfen Giriniz : ");
	scanf ("%d", &n);
	
	for (i = 0 ; i < n ; i += 1){
		printf ("%d.Sayiyi Giriniz : ",i+1);
		scanf ("%d", &a);
		t = t + a;
	}
	
	printf ("Sayilarin Ortalamasi : %f", t/n);
	
	getch ();
	return 0;
}
