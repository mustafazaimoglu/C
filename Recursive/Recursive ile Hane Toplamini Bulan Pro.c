#include <stdio.h>
#include <conio.h>

int main ()
{
	int n,t;
	
	printf ("Lutfen Basamak Toplamini Bulmak Istediginiz Sayiyi Giriniz : ");
	scanf ("%d",&n);

	t = HaneIslemi(n);
	
	printf ("Girilen Sayinin Haneler Toplami : %d",t);
	
	getch ();
	return 0;
}

int k=0;
int HaneIslemi(int x)
{
	int p;
	if (x > 9)
	{
		p = x % 10;
		k = k + p;
		return HaneIslemi((x-p)/10);
	}
	else
	{
		return k+x;
	}

}
