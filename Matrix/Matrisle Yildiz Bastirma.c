#include <stdio.h>
#include <conio.h>

int main ()
{
	char M[5][5],i,j;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == j || (i+j)==5-1)
			{
				M[i][j] = '*';	
			}
			else 
			{
				M[i][j] = ' ';	
			}	
		}
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf ("%c ",M[i][j]);
		}
		printf ("\n");
	}
	
	getch ();
	return 0;
}
