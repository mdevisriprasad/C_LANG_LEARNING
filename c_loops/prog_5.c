#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("ENTER N VALUE:");
    scanf("%d",&n);
    int i=n;
    while(i>=0)
    {
        sum = sum+i;
        i--;
    }
    printf("sum of 1st %d\nnatural numbers is: %d\n",n,sum);

    return 0;
}