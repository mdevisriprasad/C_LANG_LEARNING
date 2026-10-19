#include<stdio.h>

int main()
{
    int a;
    printf("ENTER A NUMBER");
    scanf("%d",&a);
    printf("VALUE OF =%d\n",a);
    a+=10;
    printf("this a value of a+=%d\n",a);
    a-=3;
    printf("this a value of a-=%d\n",a);
    a*=2;
    printf("this a value of a*=%d\n",a);
    a/=6;
    printf("this a value of a/=%d\n",a);
    a%=5;
    printf("this a value of a%=%d\n",a);

    return 0;

}