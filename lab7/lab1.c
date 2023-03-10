#include <stdio.h>

int main() {
    // Write C code here
   int a=4, b=3, c, d, e;
float f=2,g=5, h, i, j, k;

c = f/b*f;          
printf("%d\n", c);
h = a++/(float)b;  
printf("%f\n", h);        
j = (float)c/h--;   
printf("%f\n", j);   
d = b*h/c;     
printf("%d\n", d);            
i = d*f+h--;
printf("%f\n", i);      
e = a*d++/i;
printf("%d\n", e);         
k = (int)i*d/(float)a;
printf("%f\n", k);   

    return 0;
}