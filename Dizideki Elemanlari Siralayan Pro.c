#include <stdio.h>
#include <conio.h>

int main ()
{
	int mkz[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf ("%d",&mkz[i]);
	}
	int enk,j,c;
	for (i = 0; i < 5; i++)
	{
		enk = mkz[i];
		c = i;
		for (j = i; j < 5; j++)
		{
			if (enk > mkz[j])
			{
				enk = mkz[j];
				c = j;
			}
		}
		for (j = 4; j >= i; j--)
		{
			mkz[j+1] = mkz[j];
		}
		mkz[i] = enk;
		mkz[c+1]=mkz[5];
	}
	
	printf ("\n\n\n");
	for (i = 0; i < 5; i++)
	{
		printf ("%d ",mkz[i]);
	}
	
	getch ();
	return 0;
}
