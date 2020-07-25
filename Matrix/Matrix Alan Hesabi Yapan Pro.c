#include <stdio.h>
#include <conio.h>

int main ()
{
	int m[5][5],i,j,c;
	
	m[1][1] = 1;
	m[2][2] = 1;
	m[3][3] = 1;
	m[1][2] = 1;
	m[1][3] = 1;
	m[2][1] = 1;
	m[2][3] = 1;
	m[3][2] = 1;
	m[3][1] = 1;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (m[i][j] != 1)
			{
				m[i][j] = 0;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf ("%d ",m[i][j]);
		}
		printf ("\n");
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (m[i][j] == 1)
			{
				c++;
			}
		}
	}		
	
	printf ("\nSeklin Alani : %d",c);
	
	getch ();
	return 0;
}
