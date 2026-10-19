#include <stdio.h>

int main()
{
    char name[30];
    printf("HELLO GOOD MORNING \n");
    printf("ENTER YOUR NAME:");
    fgets(name,sizeof(name), stdin);
    printf("THANK YOU. YOUR NAME IS: %s",name);

    return 0;
}