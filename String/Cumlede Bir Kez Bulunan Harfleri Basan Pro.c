#include <stdio.h>
#include <conio.h>

int main ()
{
	char Cumle[200];
	int i,j;
	
	printf ("Type Any String :");
	gets (Cumle);
	
	printf ("The Unique Characters : ");
	for (i = 0; Cumle[i] != '\0'; i++)
	{
		int c = 1;
		if (Cumle[i] != ' ')
		{
			for (j = i+1; Cumle[j] != '\0'; j++)
			{
				if (Cumle[i] == Cumle[j])
				{
					Cumle[j] = ' ';
					c = 0;
				}
			}
			if (c == 1)
			{
				printf ("%c",Cumle[i]);
			}	
		}
	}
	
	getch ();
	return 0;
}
