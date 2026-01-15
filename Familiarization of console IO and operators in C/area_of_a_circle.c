#include <stdio.h>
#define PI 3.142
int main()
{
    float r,area;
    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    area = PI * r * r;
    printf("The area of the circle is %f",area);
    return 0;
}