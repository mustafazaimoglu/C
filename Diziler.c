#include<stdio.h>
#include<math.h>
#include<conio.h>

int main () {
	int K[3];
	K[0]=5;
	K[1]=6;
	K[2]=7;
	
	
	int A[3]={1,2,3};
	
	int i;
	for (i = 0 ; i < 3 ; i++){
		printf ("%d\n",A[i]);
		printf ("%d\n",K[i]);
	}
	
	getch ();
	return 0;
}
