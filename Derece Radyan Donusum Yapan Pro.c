#include <stdio.h>
#include <conio.h>
#include <math.h>

float D2R(int derece)
{
	float y;
	float p = 3.14;
	
	y =(derece*p)/180;
	
	return y;
}

int R2D(float radyan)
{
	float y;
	float p = 3.14;
	
	y =(radyan*180)/p;
	
	return y;
}

int main ()
{
	float d,radyan,r;
	int derece;
	
	printf ("Radyana Cevirmek Istediginiz Dereceyi Giriniz : ");
	scanf ("%d",&derece);
	
	d = D2R(derece);
	printf ("Girilen Derecenin Degeri : %.2f\n\n",d);
	
	printf ("Dereceye Cevirmek Istediginiz Radyani Giriniz : ");
	scanf ("%f",&radyan);
	
	r = R2D(radyan);
	printf ("Girilen Radyanin Degeri : %.2f",r);
	
	getch ();
	return 0;
}
