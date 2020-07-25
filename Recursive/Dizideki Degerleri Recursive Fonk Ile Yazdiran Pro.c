#include <stdio.h>
#include <conio.h>

int main ()
{
	int n,i;
	printf ("Kac Elemanli Bir Dizi Olusturmak Istiyorsunuz : ");
	scanf ("%d",&n);
	
	int arr[n];
	
	for ( i = 0 ; i < n ; i++ )
	{
		printf ("%d.Degeri Giriniz : ",i+1);
		scanf ("%d",&arr[i]);
	}
	
	Yazdirma(n,0,arr);
	
	getch ();
	return 0;
}

int Yazdirma(int son,int ilk,int arr[son])
{
	if (son > ilk)
	{
		printf ("%d  ",arr[ilk]);
		return Yazdirma(son,ilk+1,arr);
	}
}
