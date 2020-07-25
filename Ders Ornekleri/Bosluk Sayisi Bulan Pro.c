#include <stdio.h>
#include <conio.h>

void BoslukBul(char kelime[])
{
	int i=0,sayac=0;
	while(kelime[i] != '\0' )
	{
		if (kelime[i]==' ')
		{
			sayac++;
		}
		i++;
	}
	printf ("Bosluk Sayisi = %d",sayac);
}

int main()
{
	char dizi[50];
	printf ("Cumle Giriniz :");
	//scanf ("%s",&dizi); //tek kelime alir.
	gets (dizi); //birden Fazla Kelime alir.
	printf ("%s\n",dizi);
	BoslukBul(dizi);
	
	getch ();
	return 0;
}
