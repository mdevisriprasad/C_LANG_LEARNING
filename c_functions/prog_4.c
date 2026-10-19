#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 50, 70, 40};
    int i, largest;
    largest = arr[0];
    for(i=0; i<5; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("larget valur from the given vakues is %d\n", largest);
    return 0;
}