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
	int matris[n][m],a[n],b[m];
	
	for (i = 0 ; i < n ; i++ )
	{
		for (j = 0 ; j < m ; j++)
		{
			printf ("%d.Satir %d.Sutunun Degerini Giriniz : ",i+1,j+1);
			scanf ("%d",&matris[i][j]);
		}
	}
	
	for (i = 0 ; i < n ; i++)
	{
		a[i] = 0;
	}
	for (j = 0 ; j < m ; j++)
	{
		b[j] = 0;
	}
	
	for (i = 0 ; i < n ; i++ )
	{
		for (j = 0 ;  j < m ; j++)
		{
			a[i] = a[i] + matris[i][j];
		}
	}
	
	for (j = 0 ; j < m ; j++ )
	{
		for (i = 0 ;  i < n ; i++)
		{
			b[j] = b[j] + matris[i][j];
		}
	}
	printf ("\n");
	for (i = 0 ; i < n ; i++)
	{
		printf ("%d.Satir Toplami : %d\n",i+1,a[i]);
	}
	printf ("\n");
	for (j = 0 ; j < m ; j++)
	{
		printf ("%d.Sutun Toplami : %d\n",j+1,b[j]);
	}
		
	getch ();
	return 0;
}
