#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b,gcd, min, max, value_mod;
    char a_input[10], b_input[10];
    fgets(a_input, 10, stdin);
    fgets(b_input, 10, stdin);
    a = atoi(a_input);
    b = atoi(b_input);
    if(a > b){
      min = b;
      max = a;
    }else{
      min = a;
      max = b;
    }
    while(1){
      value_mod = max%min;
      if(value_mod == 0){
        break;
      }
      max = min;
      min = value_mod;
    }
    gcd = min;
    printf("= %d", a/gcd);
    if(b/gcd != 1) {
 printf("/%d",b/gcd);
}else{
 printf("");
}
}