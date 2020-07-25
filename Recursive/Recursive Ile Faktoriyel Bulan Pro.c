#include <stdio.h>
#include <conio.h>

int main ()
{
	int n,top;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&n);
	
	top = FakBul(n);
	
	printf ("%d Sayisi Girilen Sayinin Faktoriyelidir.",top);
	
	getch ();
	return 0;
}

int FakBul (int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else 
	{
		return n * FakBul (n-1);
	}
}
