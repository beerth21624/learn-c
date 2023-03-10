#include <stdio.h>
#include <stdlib.h>

int main(){
    char num_i[10];
    fgets(num_i , 10 ,stdin);
    int num = atoi(num_i);


    for(int i=0;i<= num;i++){
        int resault = num - i;
        printf("%d\n", resault);
    }


}