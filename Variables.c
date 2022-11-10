#include<stdio.h>

int main()

{
    int age1, sumage, age2;

    printf("Enter a Value Please :");
    scanf("%d", &age1);

    printf("Enter Value 2 :");
    scanf("%d", &age2);

    sumage = age1 + age2;

    printf("%d + %d = %d", age1, age2, sumage);

    return 0;
}
