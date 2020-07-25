#include <stdio.h>
#include <conio.h>

void Ucgen(int n)
{
	int i;
	if (n > 1)
	{
		Ucgen(n-1);
	}
	for (i = 0; i < n; i++)
	{
		printf (" *");
	}
	printf ("\n");
}

int main ()
{
	int sayi;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&sayi);
	
	Ucgen(sayi);
		
	getch ();
	return 0;
}
