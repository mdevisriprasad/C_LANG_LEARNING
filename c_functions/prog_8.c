#include<stdio.h>
int square(int n);

int main()
{
    int number;

    printf("Enter a Number");
    scanf("%d",&number);

    printf("Square = %d\n",square(number));

    return 0;
}

int square(int n)
{
    return n*n;
}