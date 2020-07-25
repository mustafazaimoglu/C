#include <stdio.h>
#include <conio.h>

int main ()
{
	int n,m,i,j;
	printf ("Matris Degerlerini Giriniz!\n");
	printf ("Satir Sayisi : ");
	scanf ("%d",&n);
	printf ("Sutun Sayisi : ");
	scanf ("%d",&m);
	int matris[n][m];
	
	for (i = 0 ; i < n ; i++ )
	{
		for (j = 0 ; j < m ; j++)
		{
			printf ("%d.Satir %d.Sutunun Degerini Giriniz : ",i+1,j+1);
			scanf ("%d",&matris[i][j]);
		}
	}
	
	int ttop=0,ctop=1;
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < m ; j++)
		{
			ttop = ttop + matris[i][j];
			ctop = ctop * matris[i][j];
		}
	}
	
	printf ("Carpimlari Esittir : %d\nToplamlari Esittir : %d",ctop,ttop);
	
	getch ();
	return 0;
}
