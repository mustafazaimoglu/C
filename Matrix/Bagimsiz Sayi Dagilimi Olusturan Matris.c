#include <stdio.h>
#include <conio.h>

int main ()
{
	int m[6][6];
	int i,j;
	
	for (i = 0 ; i < 6 ; i++)
	{
		for (j = 0 ; j < 6 ; j++)
		{
			m[i][j] = 0;
		}
	}
	
	m[0][0] = 1;
	m[0][3] = 1;
	m[0][4] = 1;
	m[1][0] = 1; 
	m[1][1] = 1;
	m[1][4] = 1;
	m[1][5] = 1;
	m[2][0] = 1;
	m[2][1] = 1;
	m[2][3] = 1;
	m[4][1] = 1;
	m[4][2] = 1;
	m[4][3] = 1;
	m[5][1] = 1;
	m[5][4] = 1;
	m[5][5] = 1;	
	
	for (i = 0 ; i < 6 ; i++)
	{
		for (j = 0 ; j < 6 ; j++)
		{
			printf ("%d ",m[i][j]);
		}
		printf ("\n");
	}
	
	getch ();
	return 0;
}
