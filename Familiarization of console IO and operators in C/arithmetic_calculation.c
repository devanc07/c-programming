#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    float result;
    printf("Enter the values for a,b,c,d,e,f,g : ");
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
    result = ((a-b/c*d+e)*(f+g));
    printf("result %f", result);
    return 0;
}