#include <stdio.h>

int main()
{
    int a = 0;
    float b = 0.0;
    long c = 0;
    double d = 0.0;
    unsigned int e = 0;

    char c ='a';
    char name[10] = "hello";


    printf("Hello, World");
    printf("%d %u %ld %f %lf %c %s", a, e, c, b, d, c, name);
    return 0 ;

}