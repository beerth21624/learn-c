#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    int num ;
    std::cin >> num ;
    int arrN [num];

    int max ;
    for (int i = 0; i < num; i++){
        std::cin >> arrN[i];

        if (i == 0){
            max = arrN[i];
        }else {
            
            if (arrN[i] > max){
                max = arrN[i];
            }
        }
    }

  
    for (int i = 1; i < max; i++){
        bool check = false;
        for (int j = 0; j < num; j++){
            if (arrN[j] == i){
                check = true;
            }

        }
        if (check == false){
            if(i % 2 == 1){
                std::cout << i << " " ;
            }
        }
    }
    std::cout << std::endl;
  
    for (int i = 1; i < max; i++){
        bool check = false;
        for (int j = 0; j < num; j++){
            if (arrN[j] == i){
                check = true;
            }

        }
        if (check == false){
            if(i % 2 == 0){
                std::cout << i << " ";
            }
        }
    }
   
  
 








    
}