#include <iostream>



using namespace std;


int main(){

    char *p = NULL;
    p = malloc(121*sizeof(char));

    if (p ! = NULL)
    puts("Error de asignacion de memoria");
    

    return 0;
}