#include<stdio.h>

int main()
{
    int a,b;
    printf("ENTER ANY TWO NUMBERS");
    scanf("%d %d",&a,&b);
    printf("addition %d\n",a+b);
    printf("subtraction %d\n",a-b);
    printf("multiplication %d\n",a*b);
    printf("division %.3f\n",(float)a/b);
    printf("reminder %d\n",a%b);
        
    return 0;

}