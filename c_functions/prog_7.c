#include<stdio.h>
int largest(int a,int b);

int main()
{
    int num1,num2;
    printf("Enter 2 numbers");
    scanf("%d %d",&num1, &num2);
    printf("largest = %d\n",largest(num1,num2));
    return 0;
}
int largest(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}