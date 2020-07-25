#include <stdio.h>
#include <conio.h>

void arttir(int x) //deger degismez return yok.
{
	x = x + 1;
}

void arttirPointer(int *x) //Deger degisir cunku a'nin Konumuyla islem yaptik. 
{
	*x = *x + 1;
}

int main ()
{
	int dizi[3]={5,8,2};
	int *ptr;
	ptr = dizi;
	
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf ("%d ",*(ptr+i));
	}
	printf ("\n");
	*(ptr+1) = 10;
	
	for (i = 0; i < 3; i++)
	{
		printf ("%d ",*(ptr+i));
	}
	
	printf ("\n");
	char kelime[10]="Merhaba";
	char *isim="Mustafa";
	
	printf ("%s\n",isim);
	
	int *p;
	p = (int*)malloc(sizeof(int)*10); // malloc yer ayrimak icin kullanilir.
	
	p[0]=2;
	*p = 2;
	
	free(p); //Pointer Icin Ayrilan Yeri Temizler.
	
	
	getch ();
	return 0;
}
