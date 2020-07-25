#include <stdio.h>
#include <conio.h>

int c = 0;

int Arama (int arr[],int x,int l,int h)
{
	int m=(l+h)/2;
	if (arr[m] == x)
	{
		c++;
		return c;
	}
	else if (arr[m] > x)
	{
		c++;
		return Arama(arr,x,l,m-1);
	}
	else
	{
		c++;
		return Arama(arr,x,m+1,h);
	}
	
}
int main ()
{
	int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12},t,x;
	
	printf ("lutfen Bir Sayi Giriniz: ");
	scanf ("%d",&x);
	
	t = Arama(arr,x,0,11);
	
	printf ("\n%d Seferde Bulundu.",t);
	
	
	getch ();
	return 0;
}

