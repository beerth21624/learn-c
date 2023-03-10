#include <stdio.h>
int getGrandScore (char grade);
int main(){
    int num ;
    double sumScore;
    double sumGrade;
    printf("Enter number of subject(s): ");
    scanf("%d", &num);
    for(int i = 0; i< num;i++ ){
        char grade;
        int score;
      printf("Enter credit,grade for subject #%d: ",i+1);
      scanf("%d,%c",&score,&grade);
        sumScore += score;
        int getGrade = getGrandScore(grade);
        sumGrade += score * getGrade;
      
    }
    double GPA = sumGrade/(double)sumScore;
    printf("GPA = %.2f",GPA);
    return 0;

}

int getGrandScore (char grade){

switch (grade)
{
case 'A':
    return 4;
    break;
case 'a' :
    return 4;
    break;
case 'B':
    return 3;
    break;
case 'b':
    return 3;
    break;
case 'C':
    return 2;
    break;
case 'c':
    return 2;
    break;
case 'D':
    return 1;
    break;
case 'd':
    return 1;
    break;
default:
    return 0;
    break;
}

}