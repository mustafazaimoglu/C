//Coded By MKZ
#include <stdio.h>
#include <conio.h>

int main ()
{
	int n;
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&n);
	
	int i,j;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n-1; j++)
		{
			printf (" ");
		}
		
		for (j = 0; j < i; j++)
		{
			printf ("* ");
		}
		printf ("\n");
	}
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0;j < n-4; j++)
		{
			printf (" ");
		}
			printf ("|   |\n");
	}
	
	getch ();
	return 0;
}
