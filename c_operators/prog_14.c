#include<stdio.h>

int main()
{
    int number;
    printf("ENTER ANY NUMBER");
    scanf("%d",&number);
    if (number %2==0)
    {
        printf("THIS IS A EVEN NUMBER\n",number);
    }
    else
    {
         printf("THIS IS A ODD NUMBER\n",number);
    }

    return 0;
    
}