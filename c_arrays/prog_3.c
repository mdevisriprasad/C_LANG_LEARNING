#include<stdio.h>
int main()
{
    float arr[5] = {20.4,45.7,35.9,46.7,33.3};
    int i; 
    float sum= 0;
    for(i=0; i<5; i++)
    {
        sum += arr[i];
    }
    printf("sum of elements of array is %.3f\n",sum);

    return 0;
}