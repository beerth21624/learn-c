#include <iostream>
using namespace std;

int main() {
   int num,count=0;
    std::cin >> num ;

    while ( num > 0) {
      
        if (num % 2 == 1) {
            num = num - 1;
            count++;
        }else{
             num = num / 2;
            count++;
        }
    }
   std::cout << count << std::endl;
    
}  