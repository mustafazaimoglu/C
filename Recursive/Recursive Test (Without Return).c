#include <stdio.h>
#include <conio.h>

int main ()
{
	int x = 5;
	
	ABC(x);
	
	getch ();
	return 0;
}

int ABC (int y)
{
	int i = 0;
	
	if (y > 1)
	{
		ABC(y-1);
	}

	for (i = 0 ; i < y - 1 ; i++)
	{
		printf ("* ");
	}
	printf ("\n");
}
