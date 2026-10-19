#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("ENTER N VALUE:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        sum = sum+i;
    }
    printf("sum of 1st %d\nNatural numbers is: %d\n",n,sum);

    return 0;

}