#include <stdio.h>
#include <conio.h>

int main()
{
	int sayi1,sayi2,sayi3,i;
	printf("Lutfen 3 Tane Sayi Giriniz >>\n");

	printf ("Lutfen 1.Sayiyi giriniz : ");
	scanf ("%d",&sayi1);

	printf ("\nLutfen 2.Sayiyi Giriniz : ");
	scanf ("%d",&sayi2);

	printf ("\nLutfen 3.Sayiyi Giriniz : ");
	scanf ("%d",&sayi3);

	printf("\n");
	
	int t = 0;

	for (i = sayi3*sayi2*sayi1; i > 0; i--)
	{
		if (i == sayi1 || i == sayi2 || i == sayi3)
		{
			printf ("%d",i);
			t = t + 1;
			
			if (t < 3) //Buyuktur Isaretini Koymak Icin Var
			{
				printf (" > ");
			}
			else //Bu Kisim Islemi Bir nebze Azaltmak Icin Var
			{
				i = 1;
			}
		}
	}
	getch ();
	return 0;
}
