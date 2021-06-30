#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (){
	int i,j,t,k;
	int a[3][3];
	
	for (i = 0 ; i < 3 ; i++){
		for (j = 0 ; j < 3 ; j++){
			printf ("%d.satir %d.sutunu giriniz : ",i+1,j+1);
			scanf ("%d", &a[i][j]);
		};
	};
	
	for (i = 0 ; i < 3 ; i += 1){
		for (j = 0 ; j < 3 ; j++){
			printf ("%d ", a[i][j]);
		};
		printf ("\n");
	};
	
	getch (); 
	return 0;
}
