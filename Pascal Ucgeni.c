#include <stdio.h>
#include <conio.h>

int fak(int x)
{
	if (x == 0)
	{
		return 1;
	}
	else if (x == 1)
	{
		return 1;
	}
	else
	{
		return x*fak(x-1);
    }
}

int main ()
{
	int n;
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&n);
	
	int i,j,t;
	
	for (i = 0; i < n; i++)
	{
		for (j = n; j > i; j--)
		{
			printf (" ");
		}
		for (j = 0; j <= i; j++)
		{
		t = fak(i)/(fak(j)*(fak(i-j)));
		printf ("%d ",t);
		}
		printf ("\n");
	}
	
	getch ();
	return 0;
}
