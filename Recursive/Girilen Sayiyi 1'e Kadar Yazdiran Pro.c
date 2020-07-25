#include <stdio.h>
#include <conio.h>

int mkz(int x)
{
	if (x == 0)
	{
		return 0;
	}
	else
	{
		printf ("%d ",x);
		return mkz(x-1);
	}
}

int main ()
{
	int i;
	printf ("Bir Sayi Giriniz : ");
	scanf ("%d",&i);
	
	mkz(i);
	
	
	getch ();
	return 0;
}
