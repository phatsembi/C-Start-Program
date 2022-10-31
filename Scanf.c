#include<stdio.h>
int main()
{

    char str[100];
    int i;
    double x;

    printf("Enter a Value Please :");
    scanf("%d %s",&i, str);

    printf("Enter the Double :");
    scanf("%lf", &x);

    printf("\nYou Entered: %d\n %s",i, str);

    printf("\nYou Entered: %lf\n", x);

    return 0;
}
