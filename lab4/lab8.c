#include <stdio.h>
#include <stdlib.h>

long long convertNum(long long int n){
  if(n == 0) return 0;
  return n % 2 + 10 * (convertNum(n / 2));
}

int main() {
  char num_i[10];
  fgets(num_i, 10, stdin);
  long long num = atoi(num_i);
  printf("%lld", convertNum(num));
}

