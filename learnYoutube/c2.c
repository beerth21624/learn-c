#include <stdio.h>


void rectangle(){
    double area;
    int w,h;
    printf("enter width =");
    scanf("%d",&w);
    printf("enter height =");
    scanf("%d",&h);

     area = w*h;
    printf("rectangle area = %.2f" , area);
}
void triangle(){
    double area;
    int w,h;
    printf("enter width =");
    scanf("%d",&w);
    printf("enter height =");
    scanf("%d",&h);

     area = w * h * .5;
    printf("rectangle area = %.2f" , area);
}

double rectangle2(double w , double h){
    double area ;
    area = w*h;
    return area;

}



int main(){
   printf("rectangle2= %.2f", rectangle2(3,4));
}
