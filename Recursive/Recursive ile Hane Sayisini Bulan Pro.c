#include <stdio.h>
#include <conio.h>

int main ()
{
	int n,t;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&n);
	
	t = HaneSayisi(n);
	
	printf ("Girilen Sayi %d Basamaklidir.",t);
	
	getch ();
	return 0;
}

int m = 1;
int HaneSayisi(int x)
{
	int p;
	if (x > 9)
	{
		p = x % 10;
		m++;
		return HaneSayisi((x-p)/10);
	}
	else
	{
		return m;	
	}
}
