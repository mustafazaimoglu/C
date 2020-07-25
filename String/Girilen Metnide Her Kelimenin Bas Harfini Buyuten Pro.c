// Coded By MKZ -_-
#include <stdio.h>
#include <conio.h> // ASCII Buyuk Ve Kucuk Harflerin Farki 32'dir Bu yolla Problem Cozulmustur. A = 65 , a = 97

int main ()
{
	char Cumle[200],i;
	printf ("Lutfen Bir Cumle Giriniz : ");
	gets (Cumle);
	
	for (i = 0; Cumle[i] != '\0'; i++)
	{
		if (Cumle[0] > 96)
		{
			Cumle[0] = Cumle[0] - 32;
		}
		
		if (Cumle[i] == ' ')
		{
			if (Cumle[i+1] > 96)
			{
				Cumle[i+1] = Cumle[i+1] - 32;
			}
		}
	}
	
	printf ("%s",Cumle);
	
	getch ();
	return 0;
}
