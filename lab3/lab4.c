#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{
     double fn = (pow((1 + sqrt(5)),n) -  pow((1 - sqrt(5)),n) )/(pow(2,n)*sqrt(5));
 
    return fn;
}

int main()
{
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);
    for (i=0;i<=n;i++) {
        if(i==1){
             printf("F(%d) = %d\n",i,1);
        }else{
        printf("F(%d) = %d\n",i,fibo(i-2)+fibo(i-1));
        }

    }
    return 0;
}

