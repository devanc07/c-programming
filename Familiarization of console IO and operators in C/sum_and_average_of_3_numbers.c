#include <stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a+b+c;
    printf("The sum of %d, %d, and %d is %d",a,b,c,sum);
    avg = sum/3;
    printf("\nThe average of %d, %d, and %d is %f",a,b,c,avg);
    return 0;
}