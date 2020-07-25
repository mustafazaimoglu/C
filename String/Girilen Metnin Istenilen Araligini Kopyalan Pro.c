#include <stdio.h>
#include <conio.h>

int main ()
{
	char arr[200];
	
	printf ("Lutfen Bir String Giriniz : ");
	gets (arr);
	int r,k,i;
	printf ("Girilen Metnin Hangi Karakterleri Arasini Kopyalamak Istiyorsunuz?\nLutfen Giriniz :\n");
	scanf ("%d",&k);
	scanf ("%d",&r);
	
	char arr1[r-k];
	int c = 0;
	for (i = k-1 ; i <= r-1 ; i++)
	{
		arr1[c]=arr[i];
		c = c + 1;
	}
	
	printf ("%s",arr1);
		
	getch ();
	return 0;
}
