#include <stdio.h>
#include <conio.h>

void Binary(int n)
{
	if (n == 0)
	{
		return;
	}
	
	Binary(n/2);
	
	printf ("%d", n%2);
}

int main ()
{
	int sayi;
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&sayi);
	
	printf ("Girilen Sayinin Binary Karsiligi : ");
	Binary(sayi);
	
	getch ();
	return 0;
}
