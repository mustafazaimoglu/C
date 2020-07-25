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
	
	printf ("\nMatris Asagidaki Gibidir : \n");
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < m ; j++)
		{
			printf ("%d ",matris[i][j]);
		}	
		printf ("\n");
	}
	
	int sa,su,k;
	printf ("\nMatrisin Hangi Degerini Degistirmek Istediginizi Giriniz!\nGirilen Deger %d Ve %d Altinda Olmali!\n",n,m);
	printf ("Kacinci Satir : ");
	scanf ("%d",&sa);
	printf ("Kacinci Sutun : ");
	scanf ("%d",&su);
	
	printf ("Verilen Konuma Hangi Deger Yazilsin : ");
	scanf ("%d",&k);
	
	matris[sa-1][su-1] = k;
	
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < m ; j++)
		{
			printf ("%d ",matris[i][j]);
		}	
		printf ("\n");
	}
	
	getch ();
	return 0;
}
