#include <iostream>
#include <stdio.h>
#include <cstdio>
#define T "Tambor de hojalata."
using namespace std;

int main(){

    char st[21];

    // fgets(st,sizeof(st),stdin);
    cout<<st<<endl;


    puts(T);
    puts("Permiso para salir en la foto.");
    puts(st);
    puts(&st[8]);
    
    return 0;
}