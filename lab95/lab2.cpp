#include <iostream>
#include <cstdio>
using namespace std;


int main() {
 char name[50];
 std::cin >> name;
 
 double allSalary;
 double salary;
 std::cin >> salary;

 int i ;

for ( i = 0; i < 12; i++){
    double money ;
    std::cin>>money ;
    money =  (money *15)/100;
    allSalary = allSalary + money + salary;
 }

sprintf(name, "%s %.2f", name, allSalary);
std :: cout << name << std::endl;    
}