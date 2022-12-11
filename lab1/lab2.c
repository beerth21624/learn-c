#include <stdio.h>
#include <stdlib.h>

#define PI 22.0/7

int main()
{
    float radius = 1.5;
    float r = radius * radius * radius ;
    float ans = (4.0 / 3 ) * PI * r ;
    printf("The volume of this sphere is %.2f",ans);
    return 0;
}