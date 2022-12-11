#include <stdio.h>
#include <stdlib.h>

char str[10];

int main(){
    // gets(str);
    fgets(str , 10 ,stdin);
    printf("input - %s\n",str);
    // char c = getchar();
    // printf("%c",c);

    int i = atoi(str);
    long l = atol(str);
    double d = atof(str);

    printf("%d %ld %lf\n",i,l,d);

}
