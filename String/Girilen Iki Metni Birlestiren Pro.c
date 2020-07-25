#include <stdio.h>
#include <conio.h>

int BoyutBul (char x[])
{
	int i;
	for (i = 0; x[i] != '\0'; i++);
	return i;
}

int main ()
{
	char Cum1[200],Cum2[200],Cum3[200];
	int i,j=0,c1b,c2b;
	
	printf ("Lutfen Birinci Metni Giriniz : ");
	gets (Cum1);
	printf ("Lutfen Ikinci Metni Giriniz : ");
	gets (Cum2);
	
	c1b = BoyutBul(Cum1);
	c2b = BoyutBul(Cum2);
	
	for (i = 0; i < c1b; i++)
	{
		Cum3[j] = Cum1[i];
		j++;
	}
	for (i = 0; i < c2b+1; i++)
	{
		Cum3[j] = Cum2[i];
		j++;
	}
	
	printf ("Birlesmis Hali : %s",Cum3);
	
	getch ();
	return 0;
}
