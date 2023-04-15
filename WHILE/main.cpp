#include <iostream>
#include <ncurses.h>

using namespace std;


int main(){

     system("clear");
    system("figlet -c 'Ejercicio 21\n'");

    int i;
    cout<<"Ingrese un numero : "; cin>>i;

    while(i<=100){
        cout<<"Ingrese un numero : ";
        cin>>i;
    }


    return 0;


}