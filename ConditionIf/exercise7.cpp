#include <iostream>
#include <cstdio>
#include <stdio.h>

int main(){
    
    int n;
    printf("Ingrese un valor : ");
    scanf("%d",&n);
    if(n<0){
        puts("Este numero es negativo. Pruebe de nuevo");
        scanf("%d",&n);
    }else
        printf("CONFORME. N = %d\n",n);

    return 0;
}