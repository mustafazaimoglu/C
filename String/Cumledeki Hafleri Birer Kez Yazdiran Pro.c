#include <stdio.h>
#include <conio.h>

int main ()
{
	char Cumle[200];
	int i,j;
	
	printf ("Lutfen Bir Metin Giriniz : ");
	gets (Cumle);
	
	for (i = 0; Cumle[i] != '\0'; i++)
	{
		if (Cumle[i] != ' ')
		{
			for (j = i+1; Cumle[j] != '\0'; j++)
			{
					if (Cumle[i] == Cumle[j])
					{
						Cumle[j] = ' ';
					}
			}
			printf ("%c",Cumle[i]);
		}
	}
	
	getch ();
	return 0;
}
