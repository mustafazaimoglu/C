#include <stdio.h>
#include <conio.h>

int main ()
{
	int m[2][2];
	
	m[0][0]=1;
	m[0][1]=2;
	m[1][0]=1;
	m[1][1]=1;
	
	int i,j,z;
	for (i = 0 ; i < 2 ; i++)
	{
		for (j = 0 ; j < 2 ; j++)
		{
			printf ("%d ",m[i][j]);
		}
		printf ("\n");	
	}
	int y=55;
	z = mkz(m,y);
	
	printf ("\n");
	printf ("\n");
	
	for (i = 0 ; i < 2 ; i++)
	{
		for (j = 0 ; j < 2 ; j++)
		{
			printf ("%d ",m[i][j]);
		}
		printf ("\n");	
	}
	
	getch ();
	return 0;
}

int mkz (int x[2][2],int y)
{
	if (y > 48)
	{
		return mkz(x,y-1);
	}else
	{
		x[0][1]=y;
	}
	
	
	return x[2][2];
}
