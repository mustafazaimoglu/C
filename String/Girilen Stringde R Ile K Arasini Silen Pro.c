#include <stdio.h>
#include <conio.h>

int BoyutBul(char x[])
{
	int i;
	for (i = 0; x[i] != '\0'; i++);
	return i;
}

void AralikSilici(char x[],int r,int cb)
{
	int i;
	for (i = r; i < cb; i++)
	{
		x[i] = x[i+1];
	}
}

int main()
{
	char Cumle[200];
	int i,cb;
	
	printf ("Lutfen Bir Cumle Giriniz : ");
	gets (Cumle);	
	cb = BoyutBul(Cumle);
	
	int r,k;
	printf ("Lutfen Ilk Degeri Giriniz : ");
	scanf ("%d",&r);
	printf ("Ikinci Degeri Giriniz : ");
	scanf ("%d",&k);
	
	while (k-1 > r-1)
	{
		AralikSilici(Cumle,r,cb);
		k--;
	}
	printf ("%s",Cumle);
	
	getch ();
	return 0;
}
