#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n;
    scanf("%d", &n);

    int *ptr  = (int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++){
        scanf("%d", ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%d ", *(ptr+i));
    }
    ptr = (int *)realloc((ptr), (n+1)*sizeof(int));

    return 0 ;
}