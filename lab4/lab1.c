#include <stdio.h>
#include <stdlib.h>

int main (){

    char num_i[10];
    fgets(num_i,10,stdin);
    int num = atoi(num_i);
   printf("Binary number of %d is ",num);
    for(int i=3 ; i>=0; i-- ){
            printf("%d",(num>>i)%2);
    } 
    printf(".");
    

}

