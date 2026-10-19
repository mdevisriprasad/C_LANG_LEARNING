#include<stdio.h>

int main()
{
    int a,b;
    int c=a+b;
    printf("ENTER ANY TWO NUMBERS");
    scanf("%d %d",&a,&b);
    printf("SUM OF TWO NUMBERS IS %d",c);

    return 0;
}

// this will not give correct answer because in the 2nd line of the prog, the values of a and b are not initialized.