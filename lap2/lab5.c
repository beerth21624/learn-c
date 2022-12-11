#include <stdio.h>
#include <stdlib.h>

int main(){
    char ai[10],bi[10],ci[10];
    printf("Enter length of side A: ");
    fgets(ai ,10,stdin);
    printf("Enter length of side B: ");
    fgets(bi ,10,stdin);
    printf("Enter length of side C: ");
    fgets(ci ,10,stdin);

    int a = atoi(ai);
    int b = atoi(bi);
    int c = atoi(ci);

    if(a+b<=c || b+c <=a|| a+c <=b){
        printf("Triangle type is invalid.");
    }else if(a==b&& b==c){
        printf("Triangle type is equilateral.");
    }else if(a!=b&& b!=c&& a!=c){
                printf("Triangle type is scalene.");
    }else {
 printf("Triangle type is isosceles.");
    }

}