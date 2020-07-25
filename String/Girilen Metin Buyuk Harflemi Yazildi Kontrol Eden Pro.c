#include <stdio.h>
#include <conio.h>

int main ()
{
	int i,j,d;
	char Cumle[200];
	char Kontrol[]={"QAZSWXDCERFVTGBYHNUJMIKLOP"};
	
	printf ("Lutfen Metni Giriniz : \n");
	gets (Cumle);
	
	printf ("%s\n",Cumle);
	
	d = boyut(Cumle);
	
	int c,s = 0;
	for (i = 0 ; Cumle[i] != '\0' ; i++)
	{
		c = 0;
		for (j = 0 ; Kontrol[j] != '\0' ; j++)
		{
			if (Cumle[i] == Kontrol[j])
			{
				c = 1;
			}	
		}
		if (c == 1)
		{
			s = s + 1;
		}
	}
	
	if (s == d)
	{
		printf ("Yazi Tamamen Buyuk Harf Ile Yazilmisitir!");
	}
	else
	{
		printf ("Yazida Kucuk Harflerde Bulunmaktadir!");
	}
	
	
	getch ();
	return 0;
}

int boyut(char x[200])
{
	int y=0,i;
	
	for (i = 0 ; x[i] != '\0' ; i++)
	{
		if (x[i] == ' ')
		{
			y = y + 1;
		}
	}
	return i-y;
}
