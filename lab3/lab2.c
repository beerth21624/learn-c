#include <stdio.h>
#include <stdlib.h>

int main() {
      char M_input[30], N_input[30];
      long min, max, value_mod, gcd;
  
    fgets(M_input, 30, stdin);
    fgets(N_input, 30, stdin);
   long M = atol(M_input);
    long N = atol(N_input);
    if(M > N){
      min = N;
      max = M;
    }else{
      min = M;
      max = N;
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
    printf("GCD: %ld\n", gcd);
    printf("LCM: %ld", (M*N)/gcd);
}
  