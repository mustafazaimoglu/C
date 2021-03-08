#include<stdio.h>

void swapPointer(int *num1,int *num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swapNormal(int num1,int num2) // does not work! this works just inside the func.
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int a = 15, b = 38;

    printf("a : %d ",a);
    printf("b : %d\n",b);

    swapPointer(&a, &b);

    printf("a : %d ",a);
    printf("b : %d \n",b);

    swapNormal(&a, &b);

    printf("a : %d ",a);
    printf("b : %d",b);
}