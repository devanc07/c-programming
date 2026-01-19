#include <stdio.h>
int main()
{
    char road_status;
    int temp;
    printf("Enter the road status : ");
    scanf("%c", &road_status);
    (road_status=='S') ? ((temp>0) ? printf("Wet roads message") : printf("Icy roads message")) : printf("Drive carefully message");
    return 0;
}