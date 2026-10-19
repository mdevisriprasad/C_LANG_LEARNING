#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("ENTER N VALUE:");
    scanf("%d",&n);
    for(int i=n; i>=0; i--)
    {
        sum = sum + i;
    }
    printf("Sum of 1st %d\nNatural numbers is: %d\n",n,sum);

    return 0;
}