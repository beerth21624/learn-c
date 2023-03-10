#include <stdio.h>
#include <stdlib.h>

int main(){
    char input_x[10], input_y[10];
    fgets(input_x, 10, stdin);
    fgets(input_y, 10, stdin);
    int x = atoi(input_x);
    int y = atoi(input_y);

    for(int i =0;i<y;i++){

        if(i==0){
            for(int j=0;j<x;j++){
                if(j==(x-1)){
                    printf("*\n");
                }else{
                    printf("*");
                }
            }
        }else if(i==y-1){
             for(int j=0;j<y-1;j++){
                printf(" ");
             }
              for(int j=0;j<x;j++){
                if(j==(x-1)){
                    printf("*\n");
                }else{
                    printf("*");
                }
            }
        }else{
            int count = x+i;
            for(int j=0;j<count;j++){
                if(j==i){
                    printf("*");
                }else if(j==count-1){
                   printf("*\n");
                }else{
                    printf(" ");
                }
            }
        }
      
    }


   return 0;
}