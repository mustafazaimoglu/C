#include <stdio.h>
#include <conio.h>

int main ()
{
	int m[6][6];
	int i,j,k,t;
	
	for (i = 0 ; i < 6 ; i++)
	{
		for (j = 0 ; j < 6 ; j++)
		{
				m[i][j] = 0;
		}
	}	
	
	m[1][1] = 1;
	m[0][0] = 1;
	m[0][3] = 1;
	m[0][4] = 1;
	m[1][0] = 1; 
	m[1][4] = 1;
	m[2][0] = 1;
	m[2][1] = 1;
	m[2][4] = 1;
	m[4][1] = 1;
	m[4][0] = 1;
	m[4][3] = 1;
	m[4][4] = 1;
	m[5][0] = 1;
	m[5][4] = 1;
	m[5][3] = 1;
	
	for (i = 0 ; i < 6 ; i++)
	{
		for (j = 0 ; j < 6 ; j++)
		{
			printf ("%d ",m[i][j]);
		}
		printf ("\n");
	}
	
	int c = 1;
	
	for (i = 0 ; i < 6 ; i++)
	{
		for (j = 0 ; j < 6 ; j++)
		{
			if (m[i][j] == 1)
			{
				c = c + 1;
				m[i][j]=c;
				for (k = i ; k < 6 ; k++)
				{
					for (t = j ; t < 6 ; t++)
					{
						if (m[k][t] == c)
						{
								if (m[k][t+1] == 1)
								{
									m[k][t+1] = c;
								}
								if (m[k+1][t] == 1)
								{
									m[k+1][t] = c;								
								}
								if  (m[k+1][t+1] == 1)
								{
									m[k+1][t+1] = c;
								}
								if (m[k+1][t-1] == 1)
								{
									m[k+1][t-1] = c;
								}
								if (m[k][t-1] == 1)
								{
									m[k][t-1] = c;
								}
								if (m[k-1][t] == 1)
								{
									m[k-1][t] = c;
								}
								if (m[k-1][t+1] == 1)
								{
									m[k-1][t+1] = c;
								}
								if (m[k-1][t-1] == 1)
								{
									m[k-1][t-1] = c;
								}
						}
					}	
				}	
			}	
		}
	}

	printf ("\n");
	printf ("\n");
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
