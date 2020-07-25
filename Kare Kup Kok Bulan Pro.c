#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main (){
	int kare,kup,n;
	double kok;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d", &n);
	
	kare = n * n;
	kup = pow(n,3);
	kok = sqrt(n);
	
	printf ("\nGirilen Sayinin Karekoku : %.2f\n",kok);
	printf ("Girilen Sayinin Karesi : %d\n",kare);
	printf ("Girilen Sayinin Kupu : %d\n",kup);
	
	getch ();
	return 0;
}
