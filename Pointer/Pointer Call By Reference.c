#include <stdio.h>
#include <conio.h>

void Converter (int *p,int *k)
{
	int Temp = *p;
	*p = *k;
	*k = Temp;
}

int main ()
{
	int x = 10,y = 18;
	
	printf ("Fonksiyona gitmeden onceki halleri : \nx = %d\ny = %d",x,y);
	
	Converter(&x,&y);
	
	printf ("\n\nFonksiyodan sonraki halleri : \nx = %d\ny = %d",x,y);
	
	getch ();
	return 0;
}
