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

	for (i = 0 ; i < y - 1 ; i++)
	{
		printf ("* ");
	}
	printf ("\n");
	
	if (y > 1)
	{
		return ABC(y-1);
	}
}
