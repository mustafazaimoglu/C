/*

	*p kullanarak değer tanımlarken içi boş ise ve başka bir değişkenin değerini atamıyorsak
	ramdan bir yer oluşturup o adresi verir; p = 200; hatalıdır. *p = 200; olmalı;
	eğer var olan bir değişkeni atayacaksak p = &a; gibi kullanılır. 
	yukardaki işlemden sonra içinde değer varken değiştirmek için *p = 200; yapılırsa değer adresini
	değiştirdiği için a da değişir.
	
	int *P; için
	p : address of value;
	*p : value;
	&p : own address;
	
	int p; için
	p = value;
	&p = address;
	
*/
#include<stdio.h>

int main()
{
    int *p,*pp;
    int c = 15;
    int i = 188;


    p = &c;
    c = 225;

    printf("kendi ram konumu : %p",&p);
    printf("\n");
    printf("icindeki deger : %d",*p);
    printf("\n");
    printf("icindeki degerin konumu : %p",p);

    printf("\n");
    printf("c degerinin konumu : %p \n",&c);
    printf("\n");

	*p = i;
	i = 1971;

	printf("kendi ram konumu : %p",&p);
    printf("\n");
    printf("icindeki deger : %d",*p);
    printf("\n");
    printf("icindeki degerin konumu : %p",p);

    printf("\n");
    printf("c degerinin konumu : %p \n",&c);
    printf("c degeri = %d\n",c);
    printf("i degeri = %d\n\n",i);
    
    *p = 2000;

	printf("kendi ram konumu : %p",&p);
    printf("\n");
    printf("icindeki deger : %d",*p);
    printf("\n");
    printf("icindeki degerin konumu : %p",p);

    printf("\n");
    printf("c degerinin konumu : %p \n",&c);
    printf("c degeri = %d\n",c);
    printf("i degeri = %d",i);



}