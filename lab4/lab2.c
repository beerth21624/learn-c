#include <stdio.h>
#include <stdlib.h>


int is_prime(n) {
    if (n==0 || n==1) {
        return 0;
    }else {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
    }
}

int main() {
  char input[5];
  fgets(input, 5, stdin);

  int i, n;

  n = atoi(input);

  for (int i =0 ; i <= n; i++) {
      if (is_prime(i)) {
          printf("%d is a prime number.\n", i);
      }
  }

  return 0;
}