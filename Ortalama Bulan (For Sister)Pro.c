#include <stdio.h>
#include <conio.h>

int main ()
{
	int n;
	printf ("Lutfen Once Kac Tane Not Gireceginizi Yazin Sumeyye Hanim : ");
	scanf ("%d",&n);
	
	int i,Notlar[n];
	float ort;
	for (i = 0; i < n; i++)
	{
		printf ("%d.Notu Giriniz :",i+1);
		scanf ("%d",&Notlar[i]);
		ort = ort + Notlar[i];
	}
	
	printf ("\nOrtalama = %.2f\n\n",ort/n);
	
	printf ("Coded By MKZ\n");
	printf ("     -_-");
	
	getch ();
	return 0;
}
