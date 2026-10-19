#include<stdio.h>
int main()
{
    int choice;
    printf("~~~~~~~~~~~~~~~~~~ === RESTURANT CHOICE === ~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("1. veg biryani(veg)\n");
    printf("2. fried chicken biryani(non-veg)\n");
    printf("3. chicken biryani(non-veg)\n");
    printf("4. muttan biryani(non-veg)\n");
    printf("5. panner masala biryani(veg)\n");

    printf("ORDER YOUR CHOICE");
    scanf("%d",&choice);
    switch(choice)
   {
       case 1:
       printf("veg biryani(veg)\n");
       break;

       case 2:
       printf("fried chicken biryani(non-veg)\n");
       break;

       case 3:
       printf("chicken biryani(non-veg)\n");
       break;

       case 4:
       printf("muttan biryani(non-veg)\n");
       break;

       case 5:
       printf("panner masala biryani(veg)\n");
       break;
    }

    return 0;

}