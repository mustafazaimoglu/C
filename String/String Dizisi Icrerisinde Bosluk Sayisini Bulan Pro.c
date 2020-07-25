#include <stdio.h>
#include <conio.h>

int main ()
{
	char Cumle[150];
	int i,C=0;
	
	printf ("Lutfen Cumleyi Giriniz : ");
	gets (Cumle);
	
	printf ("%s",Cumle);
	
	for (i = 0 ; Cumle[i] != '\0' ; i++)
	{
		if (Cumle[i] == ' ')
		{
			C = C + 1;
		}
	}
	
	printf ("\n%d Tane Bosluk Vardir...",C);
	
	
	getch ();
	return 0;
}
