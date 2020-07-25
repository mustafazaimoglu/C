#include <stdio.h>
#include <conio.h>

int main ()
{
	char cumle1[200],cumle2[200];
	
	printf ("Lutfen 2 Adet Cumle Giriniz Fakat Cumleler 200 Karakterden Az Olmali!\n1.Cumle : ");
	gets (cumle1);
	printf ("2.Cumle : ");
	gets (cumle2);
	int c = 0,i;
	
	for (i = 0 ; cumle1[i] != '\0' || cumle2[i] != '\0' ; i++)
	{
		if (cumle1[i] != cumle2[i])
		{
			c = 1;
			break;
		}
		else
		{
			c = 0;
		}
	}
	
	if (c == 0)
	{
		printf ("Girilen Iki Cumle Aynidir!");
	}
	else
	{
		printf ("Girilen Iki Cumle Birbirinden Farklidir!");
	}
	
	getch ();
	return 0;
}
