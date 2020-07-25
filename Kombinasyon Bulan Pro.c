#include <stdio.h>
#include <conio.h>

void Yazdir(int faktoriyel)
{
	printf ("Girilen Sayini Faktoriyeli : %d",faktoriyel);
}

int Fakt(int Sayi)
{
	int i;
	int sonuc = 1;
	for (i=1 ; i <= Sayi ; i++)
	{
		sonuc = sonuc * i;
	}
	return sonuc;
}

int main ()
{
	int n,r;
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&n);
	printf ("Lutfen Bir Sayi Daha Giriniz : ");
	scanf ("%d",&r);
	int f1=Fakt(n);
	int f2=Fakt(r);
	int f3=Fakt(n-r);
	
	int k=f1/(f2*f3);
	
	Yazdir(k);
	
	getch ();
	return 0;
}
