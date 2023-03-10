// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>


int main() {
    
int n;
printf("enter ");
scanf("%d",&n);
int *ptr = (int *)malloc(n*sizeof(int));

if(ptr == NULL){
    printf("mem not avaliable");
    exit(1);
}
int i;
for(i=0;i<n;i++){
    scanf("%d",ptr+i);
}
for(i=0;i<n;i++){
    printf("%d",*(ptr+i));
}
return 0;
}