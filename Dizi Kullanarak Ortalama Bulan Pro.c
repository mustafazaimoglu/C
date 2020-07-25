#include <stdio.h>
#include <conio.h>

int main (){
	int dizi[5];
	int i;
		
	for (i  = 0 ; i < 5 ; i++)
	{
		printf ("%d.Terimi Giriniz : ",i+1);
		scanf ("%d",&dizi[i]);
	}
	
	float t = 0;
	for (i = 0 ; i < 5 ; i++ )
	{
		t = t + dizi[i];
	}
	
	printf ("\nGirilen Sayilarin Toplami : %.0f",t);
	
	t = t/5;
	
	printf ("\nGirilen Sayilarin Ortalamasi : %.2f",t);
	
	
	getch ();
	return 0;
}
