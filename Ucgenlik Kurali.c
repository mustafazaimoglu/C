#include <stdio.h>
#include <conio.h>

int Mutlak(int x)
{
	if (x < 0)
	{
		x = x * -1;
	}
	return x;
}

int main ()
{
	int z,y,x,c=0;
	printf ("Lutfen Ucgenin Kenarlarini Giriniz!\nBirinci Kenar : ");
	scanf ("%d",&x);
	printf ("Ikinci Kenar : ");
	scanf ("%d",&y);
	printf ("Ucuncu Kenar : ");
	scanf ("%d",&z);
	
	int a=x-y,b=x-z,d=y-z;
	
	a = Mutlak(a);
	b = Mutlak(b);
	d = Mutlak(c);
	
	if (a < z && x+y > z)
	{
		c++;
	}
	if (b < y && x+z > y)
	{
		c++;
	}
	if (d < x && y+z > x)
	{
		c++;
	}
	
	if (c == 3)
	{
		printf ("Girilen Degerler Ucgenlik Kuralina Uymaktadir.");
	}
	else
	{
		printf ("Girilen Degerler Ucgenlik Kuralina Uymamaktadir.");
	}
	
	getch ();
	return 0;
}
