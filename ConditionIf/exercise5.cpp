#include <iostream>
#include <cstdio>

int main(){

    int x=2;
    if(x<=3)
        if (x!=0)
            puts("Hola desde el segundo If");
        else
            puts("Hola desde el else");
        puts("fin\nArranque de nuevo");
    if(x>3)
        if(x!=0)
            puts("Hola desde el segundo If");
        else 
            puts("Hola desde el else");
        puts("De nuevo fin");
    return 0;
}