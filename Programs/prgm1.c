/*Write an interactive C program that contains an if statement 
that may be used to compute the area of a square ( area = side^2) or a circle ( area =Pi* radius^2) 
after prompting the user to type the first character of the figure name (S or C)*/

#include <stdio.h>
#define PI 3.142
int main()
{
    int side, radius;
    float area;
    char name;
    printf("Enter S for square or C for circle \nEnter a shape to find area (S/C) : ");
    scanf("%c", &name);
    if(name=='S' || name=='s')
    {
        printf("Enter the side of the square : ");
        scanf("%d", &side);
        area = side*side;
    }
    else if (name=='C' || name=='c')
    {
        printf("Enter the radius of a circle : ");
        scanf("%d", &radius);
        area = PI * radius * radius;
    }
    printf("The area of the selected shape is %f", area);
    return 0;
}
