#include <stdio.h>
#include <conio.h>

int main ()
{
	int n,m;
	printf ("Lutfen Satir Sayisini Giriniz : ");
	scanf ("%d",&n);
	printf ("LUtfen Sutun Sayisini Giriniz : ");
	scanf ("%d",&m);
	
	int Matrix[n][m],i,j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0;j < m; j++)
		{
			printf ("%d.Satir %d.Sutun Giriniz : ",i+1,j+1);
			scanf ("%d",&Matrix[i][j]);
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0;j < m; j++)
		{
			printf ("%d ",Matrix[i][j]);
		}
		printf ("\n");
	}
	
	int enb = Matrix[0][0],enk = Matrix[0][0];
	
	for (i = 0; i < n; i++)
	{
		for (j = 0;j < m; j++)
		{
			if (enb < Matrix[i][j])
			{
				enb = Matrix[i][j];
			}
			if  (enk > Matrix[i][j])
			{
				enk = Matrix[i][j];
			}
		}
	}
	
	printf ("Matris Icerisindeki En Buyuk Sayi : %d\n",enb);
	printf ("Matris Icerisindeki En Kucuk Sayi : %d",enk);
	
	getch ();
	return 0;
}
