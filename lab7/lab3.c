#include <stdio.h>

int main(){

 int x=1, y=0, z=32;
 float i=65;
 char a='A', b='a';

int c1, c2, c3, c4, c5, c6;

c1= (b==a+z)&&(x>y);
printf("%d\n", c1);
c2= (y==z)&&(!y);
printf("%d\n", c2);
c3= (a/4==i/4)||(!z);
printf("%d\n", c3);
c4= (z>=y)&&(a!=65);
printf("%d\n", c4);
c5= (x*y)||(x)&&(z%5);
printf("%d\n", c5);
c6= (b<i)||(z/2);
printf("%d\n", c6);

    return 0;
}