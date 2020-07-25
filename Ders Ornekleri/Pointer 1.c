#include <stdio.h>
#include <conio.h>

void arttir(int x) //deger degismez return yok.
{
	x = x + 1;
}

void arttirPointer(int *x) //Deger degisir cunku a'nin Konumuyla islem yaptik. 
{
	*x = *x + 1;
}

int main ()
{
	//Pointer (gosterici,isaretci)
	//Bir degiskenin bellek adresini tutan degiskendir.
	
	int a;
	int *p;
	a = 2;
	p = &a;
	
	printf ("%d",p);
	printf ("\n%d",a);
	printf ("\n%d",*p);
	
	a = 5;
	printf ("\n%d",*p);
	
	*p = 20;
	printf ("\n%d",a);
	
	arttir(a);
	printf ("\n%d",a);
	
	arttirPointer(p);
	printf ("\n%d",a);
	
	getch ();
	return 0;
}
