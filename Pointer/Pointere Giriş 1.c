// * olduğu durumlarda adrese gider adreste bulunan kutu icerisinde islem yapar!
// & oldugu zaman adrese yonledirme amacı vardır. Ex : scanf ("%d",&.....)

#include <stdio.h>
#include <conio.h>

int main ()
{
	int a = 8, *ap;
	float b = 3.24, *bp;
	double c = 7.12, *cp;
	char d = 'a', *dp;
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	
	printf ("%d sayisinin adresi %d dir. kendi adresi %u\n",*ap,ap,&ap);
	printf ("%.2f sayisinin adresi %d dir.\n",*bp,bp);
	printf ("%.2lf sayisinin adresi %d dir.\n",*cp,cp);
	printf ("%c harfinin adresi %d dir.\n",*dp,dp);
	
	*bp = *bp + *cp;
	
	printf ("%.2f sayisinin adresi %d dir.\n",*bp,bp);
	
	*bp = *bp + *ap;
	
	printf ("%.2f sayisinin adresi %d dir.\n",*bp,bp);
	
	(*bp) += 0.24;
	
	printf ("%.2f sayisinin adresi %d dir.\n",*bp,bp);
	
	
	return 0;
}
