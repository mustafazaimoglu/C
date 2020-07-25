#include <stdio.h>
#include <conio.h>

int main ()
{
	char cumle[100];
	int KS=0,RS=0,i,j;
	
	printf ("Please Any String : ");
	gets (cumle);
	
	char rakam[]={'1','2','3','4','5','6','7','8','9','0','\0'};
	
	printf ("%s",cumle);
	
	for (i = 0; cumle[i] != '\0'; i++) //Karakter Sayisini Bulmak Icin...
	{
		if (cumle[i] == ' ')
		{
			KS = KS + 1;
		}
		for (j = 0 ; rakam[j] != '\0' ; j++) 
		{
			if (cumle[i] == rakam[j])
			{
				RS = RS + 1;
			}
		}
	}
	printf ("\nGirilen Metindeki Kelime Sayisi = %d",KS+1);
	printf ("\nGirilen Metindeki Rakam Sayisi = %d\nGirilen Metindeki Toplam Karakter Sayisi = %d",RS,i);
		
	getch ();
	return 0;
}
