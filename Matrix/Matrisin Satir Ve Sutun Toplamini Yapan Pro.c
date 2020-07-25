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
	
	int sattop=0,suttop=0;
	for (i = 0 ; i < n ; i++ )
	{
		for (j = 0 ;  j < m ; j++)
		{
			sattop = sattop + matris[i][j];
		}
	}
	printf ("\n%d Satirlar Toplamidir.",sattop);
	
	
	for (j = 0 ; j < m ; j++ )
	{
		for (i = 0 ;  i < n ; i++)
		{
			suttop = suttop + matris[i][j];
		}
	}
	printf ("\n%d Sutunlar Toplamidir.",suttop);	
		
	getch ();
	return 0;
}
