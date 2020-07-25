#include <stdio.h>
#include <conio.h>

int main ()
{
	int matris[5][5],i,j;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i > j)
			{
				matris[i][j] = -1;
			}
			else if (i == j)
			{
				matris[i][j] = 0;
			}
			else
			{
				matris[i][j] = 1;
			}
		}
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf ("%d ",matris[i][j]);
		}
		printf ("\n");
	}
	
	getch ();
	return 0;
}
