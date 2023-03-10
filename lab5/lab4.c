#include <stdio.h>
double findPI(int n);

int main() {
  int n = 0;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("%.10f", findPI(n));
}

double findPI(int n){
  double PI = 0.00;
  int quantity = 1;
  for(int i = 1; i < (n*2); i += 2){
    if(quantity % 2 == 0){
      PI -= 4.0/i;
    }else{
      PI += 4.0/i;
    }
    quantity++;
  }
  return PI;
}