#include<stdio.h>
int main()
{
    int numbers[5];
    printf("enter the element of the array \n");
    for(int i=0; i<5; i++)
    {
        printf("enter the value of the number[%d]",i);
        scanf("%d",numbers[i]);
    }
    printf("\n");
    printf("==============================");
    printf("printing array element on the screen \n");
    printf("\n");
    for(int i=0;i<6;i++)
    {
        printf("%d\n",numbers[i]);
    }
    return 0;
}