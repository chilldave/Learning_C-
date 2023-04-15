#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;

int main(){

    int number;
    cin>>number;
    switch(number+1){
        case 1: puts("Cordero asado");break;
        case 2: puts("Chuleta lechal"); break;
        case 3: puts("Chuleton"); break;
        case 4: puts("Postre de Pastel"); break;
        default: 
        puts("Buen apetito");
    }
    return 0;
}