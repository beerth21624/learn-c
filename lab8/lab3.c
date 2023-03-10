#include <stdio.h>

struct vector
{
    double x, y, z;
};

int main(void)
{
    struct vector v, u;

    printf("Enter u: ");
    scanf("%lf %lf %lf", &u.x, &u.y, &u.z);
    printf("Enter v: ");
    scanf("%lf %lf %lf", &v.x, &v.y, &v.z);

    double result_u = u.y * v.z - u.z * v.y;
    double result_x = u.z * v.x - u.x * v.z;
    double result_v = u.x * v.y - u.y * v.x;
    printf("u x v = %.1f %.1f %.1f", result_u, result_x, result_v);
    return 0;
}