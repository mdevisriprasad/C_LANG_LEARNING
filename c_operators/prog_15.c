#include<stdio.h>

int main()
{

    int number;
    printf("ENTER ANY NUMBER");
    scanf("%d",&number);
    if (number % 10==0 && number % 8==0)
    {
        printf("the number divisable by both 10 and 8\n",number);
    }
    else
    {
        printf("the number not divisiable by both 10 and 8\n",number);
    }
    
    return 0;

}