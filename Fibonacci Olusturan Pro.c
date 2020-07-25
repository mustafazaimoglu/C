#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
	int n,i;
	
	printf ("Terim Sayisi Giriniz : ");
	scanf ("%d",&n);
	
	int fib[n];
	
	fib[0] = 1;
	fib[1] = 1;
	
	for (i = 2 ; i < n ; i++ ){
		
		fib[i] = fib [i-1] + fib [i-2];
		
	}
	
	for (i = 0 ; i < n ; i++){
		
		printf ("%d\n", fib[i]);
		
	}
	
	getch ();
	return 0;
}
