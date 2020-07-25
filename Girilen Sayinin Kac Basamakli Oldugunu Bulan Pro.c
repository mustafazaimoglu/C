#include <stdio.h>
#include <conio.h>

int main (){
	int sayi,p,t=0;
	
	printf ("Kac Basamakli Oldugunu Bulmak Istediginiz Sayiyi Giriniz : ");
	scanf ("%d",&sayi);
	
	while (sayi > 0)
	{
		p = sayi % 10;
		sayi = (sayi - p)/10;
		t++;
	}
	
	printf("Girdiginiz Sayi %d Basamaklidir.",t);
	
	getch ();
	return 0;
}
