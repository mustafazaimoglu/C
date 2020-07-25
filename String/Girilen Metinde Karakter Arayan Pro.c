#include <stdio.h>
#include <conio.h>

int main ()
{
	char Cumle[200];
	
	printf ("Lutfen Bir Metin Giriniz : ");
	gets (Cumle);
	
	char Harf;
	printf ("Lutfen Aranacak Karakteri Giriniz : ");
	scanf ("%c",&Harf);
	
	int i,c=0;
	for (i = 0 ; Cumle[i] != '\0' ; i++)
	{
		if (Cumle[i] == Harf)
		{
			c = c + 1;
		}
	}
	
	printf ("\nGirilen Metinde %d Adet %c Karakterine Rastlanmistir...",c,Harf);
	
	getch ();
	return 0;
}
