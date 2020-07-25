#include <stdio.h>
#include <conio.h>

int BoyutBul (char x[])
{
	int i;
	for (i = 0; x[i] != '\0'; i++);
	return i;
}

int main ()
{
	char TR[7][20] = {{"Pazartesi"},{"Sali"},{"Carsamba"},{"Persembe"},{"Cuma"},{"Cumartesi"},{"Pazar"}};
	char EN[7][20] = {{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"},{"Sunday"}};
	char gun[20];
	printf ("Lutfen Bir Gun Giriniz : ");
	gets (gun);
	int g=BoyutBul(gun),gb,j,c;
	
	int i;
	for (i = 0; i < 7; i++)
	{
		c = 0;
		gb = BoyutBul(TR[i]);
		for (j = 0; j < gb; j++)
		{
			if (TR[i][j] == gun[c])
			{
				c++;
			}
			else
			{
				c = 0;
			}
		}
		if (gb == c && g == c)
		{
			printf ("Girilen Gunun Ingilizcesi : %s",EN[i]);
		}
	}
	
	getch ();
	return 0;
}
