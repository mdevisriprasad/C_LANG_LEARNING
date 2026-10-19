#include <stdio.h> // importing std input output library

int main()
{
    int age = 20; // declaring age variable
    int marks = 89; // declaring marks variable
    char grade = 'A'; // declaring grade variable
    float cgpa = 8.547; // declaring cgpa variables
    double pi = 3.141592; // declaring pi variable

    printf("My age is: %d\n",age);
    printf("My marks is: %d\n",marks);
    printf("My grade is: %c\n",grade);
    printf("My cgpa is: %.2f\n",cgpa);
    printf("The Value of pi is: %.5f\n",pi);

    return 0;
}