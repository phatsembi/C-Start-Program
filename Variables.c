#include<stdio.h>

int main()

{
    int age1, sumage;
    int age2 = 50;

    printf("Enter a Value Please :");
    scanf("%d", &age1);

    sumage = age1 + age2;

    printf("%d + %d = %d", age1, age2, sumage);

    return 0;
}
