#include <stdio.h>
#include <conio.h>

int main ()
{
	int sonuc=0,p,sayi;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&sayi);
	
	while (sayi > 0)
	{
		p = sayi % 10;
		sayi = (sayi-p)/10;
		sonuc = sonuc*10+p;
	}
	
	printf ("Girilen Sayinin Tersi : %d",sonuc);
	
	getch ();
	return 0;
}
