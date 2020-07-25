#include <conio.h>
#include <stdio.h>

int main ()
{
	char M[4][100];
	int i,j;
	
	for (i = 0; i < 4; i++)
	{
		printf ("Lutfen %d.Metni Giriniz : ",i+1);
		gets (M[i]);
	}
	
	for (i = 3; i >= 0; i--)
	{
		printf ("%s ",M[i]);
	}
	getch ();
	return 0;
}
