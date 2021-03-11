#include <stdio.h>
#include <conio.h>

int z=1;

int main ()
{
	int n,t;
	
	int a=20,b=4;
	
	if (z == 1)
	{
		printf ("Su An Islem Icin 20 ve 4 Sayilari Bulunmaktadir.\n");
		z++;
	}
	printf ("Toplama Icin 1'e Cikarma icin 2'ye Bolme Icin 3'e ve Carpma Icin 4'e basabilirsiniz : ");
	scanf ("%d",&n);
	
	if (n>0 && 5>n)
	{
		t = Islem(n,a,b);
		printf ("Islem Sonucu : %d",t);
	}
	else
	{
		printf ("Girilen Deger Aralikta Degil!\nLutfen Tekrar Deger Giriniz!\n\n");
		return main();
	}
	
	getch ();
	return 0;
}

int Islem(int n,int a,int b)
{
	switch (n)
	{
		case 1: return a+b;
		break;
		case 2: return a-b;
		break;
		case 3: return a/b;
		break;
		case 4: return a*b;
	}
}
