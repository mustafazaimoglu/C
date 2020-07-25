#include <stdio.h>
#include <conio.h>

int main ()
{
	int sayi,c=0,i;
	
	printf ("Lutfen Pronicligini Kontrol Etmek Istediginiz Sayiyi Giriniz : ");
	scanf ("%d",&sayi);
	
	for (i = 0 ; i < sayi ; i++)
	{
		if (i*(i+1) == sayi)
		{
			c = 1;
			printf ("%d - %d",i,i+1);
		}
	}
	
	if (c == 0)
	{
		printf ("Girilen Sayi Pronic Degildir!");
	}
	else
	{
		printf ("\nGirilen Sayi Pronictir Ve Carpanlari Yukarda Yazmaktadir.");
	}
	
	
	
	
	
	getch ();
	return 0;		
}
