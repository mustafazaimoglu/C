#include <stdio.h>
#include <conio.h>

int main ()
{
	int i,t,n;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&n);
	
	for (i = 1 ; i < n ; i++)
	{
		t = (i)*(i+1);
		if (t < n)
		{
			printf ("%d - %d\n",i,t);
		}
		else
		{
			i = n;
		}
	}
	
	getch ();
	return 0;
}
