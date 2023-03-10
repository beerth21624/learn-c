#include <stdio.h>
#include <stdlib.h>

int main(){
    char input_x[10];
    fgets(input_x, 10, stdin);
    int x = atoi(input_x);

    int count = (2*x) -1;
     int y =1;
     int u_tern =0;
    for(int i=0 ;i<count;i++){
        for(int j =0 ;j<y;j++){
            if(j == (y -1)){
                   printf("*\n");

            }else{
            printf("*");
            }
        }
        if(y>=x){
            u_tern =1;
        }
        if(u_tern){
            y-=1;
        }else{
            
            y+=1;
        }
    }



   return 0;
}