#include <stdio.h>
#include <conio.h>

int main ()
{
	int n,top;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&n);
	
	top = FibBul(n);
	
	printf ("%d Sayisi Girilen Sayinin Fibonaccisidir.",top);
	
	getch ();
	return 0;
}

int FibBul (int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return FibBul(n-1)+FibBul(n-2);
	}
	
}
