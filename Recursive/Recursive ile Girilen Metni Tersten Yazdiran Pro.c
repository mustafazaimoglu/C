#include <stdio.h>
#include <conio.h>

int Yazdirma(int i,char mkz[i])
{
	while (i != -1)
	{
		printf ("%c",mkz[i]);
		return Yazdirma(i-1,mkz);
	}
}

int main ()
{
	char mkz[100];
	
	printf ("Type Any String (Without Space) :");
	scanf ("%s",&mkz);
	
	int i;
	
	for (i = 0 ; mkz[i] != '\0'; i++);
	
	Yazdirma(i,mkz);
	
	getch ();
	return 0;
}

