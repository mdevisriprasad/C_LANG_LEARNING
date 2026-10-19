#include<stdio.h>
int main()
{
    int n;
    int i=1;
    int sum=0;
    printf("ENTER N:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum =sum+i;
        i++;
    }
    printf("sum of 1st %d Natural numbers is:%d\n",n,sum);

    return 0;
}