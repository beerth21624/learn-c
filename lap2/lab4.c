#include <stdio.h>
#include <stdlib.h>

int main(){

    char salary_i[10];
    fgets(salary_i,10 ,stdin);

    double salary = atof(salary_i);

    if (salary >300000){
        double m1 = ((salary -300000)*10 )/ 100.0;
        double m2 = (300000.0 *5)/100;
        double money = m1+m2;
        printf("%.2f",money);
    }else if(salary>=0){
        double money  = (salary*5)/100;
        printf("%.2f",money);
    }else{
        printf("Salary must be greater or equal to 0");
    }
return 0;
}