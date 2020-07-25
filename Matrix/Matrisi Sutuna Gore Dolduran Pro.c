#include <stdio.h>
#include <conio.h>

int main ()
{
	int Matrix[5][5],i,j,c=0;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			Matrix[j][i] = c;
		}
		c++;
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf ("%d ",Matrix[i][j]);
		}
		printf ("\n");
	}
	
	
	getch ();
	return 0;
}
