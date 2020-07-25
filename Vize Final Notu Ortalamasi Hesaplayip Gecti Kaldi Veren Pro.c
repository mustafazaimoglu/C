#include<stdio.h>
#include<math.h>
#include<conio.h>

int main () {
	int vize,final;
	float ort;
	printf ("Vize Notunu Giriniz : ");
	scanf ("%d",&vize);
	printf ("Final Notunu Giriniz : ");
	scanf ("%d",&final);
	
	ort = (float)vize*0.4 + final*0.6;
	
	if (final >= 55){
		printf ("Ortalamaniz : %.2f\n",ort);
		printf ("Harf Notunuz : ");
	if (ort < 45){
		printf ("FF");
	}else if (ort >= 45 && ort < 55){
		printf ("DD");
	}else if (ort >= 55 && ort < 65){
		printf ("CC");
	}else if (ort >= 65 && ort < 80){
		printf ("BB");
	}else if (ort >= 80){
		printf ("AA");
	}
	}else {
		printf ("Finalden 55 Barajini Gecemediginiz Icin FF ile Kaldiniz");
	}
	
	getch ();
	return 0;
}
