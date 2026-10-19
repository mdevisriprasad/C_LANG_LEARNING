#include<stdio.h>
int main()
{
    int arr[5] = {10,20,60,50,90};
    int i,largest;
    largest = arr[0];
    for(i=1; i<5; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        printf("largest %d");
    }
    return 0;
}