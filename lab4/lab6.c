#include <stdio.h>
#include <stdlib.h>

int main(){
    double goal =0;
    int totalDay =0;
    double totalMoney =0;
    printf("Enter your goal amount: ");
     char gmoney_i[20];
    fgets(gmoney_i,20,stdin);
    goal = atof(gmoney_i);
 while(1){
    if(goal <= 0){
        break;
    }
     totalDay +=1;
    printf("Enter money collected today: ");
    
    char money_i[20];
    fgets(money_i,20,stdin);

    double money = atof(money_i);

    totalMoney = totalMoney+money;

    goal = goal - money;
        if(goal > 0){
    printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",totalDay,totalMoney,goal);

        }
        

};
if(totalDay>0){
    if(totalDay==1){
printf("Congratulations! You take %d day to reach your goal.",totalDay);
    }else{
printf("Congratulations! You take %d days to reach your goal.",totalDay);
    }
}
    


    return 0;
}