#include <iostream>

using namespace std;

int main(){
     system("clear");
    system("figlet -c 'Ejercicio 23\n'");
    char number;
    cout<<"Estructura Switch\n";
    cout<<"Ingrese una letra : ";
    cin>>number;
    switch(number){
        case 'A': case 'a':
        case 'E': case 'e':
        case 'I': case 'i':
        case 'O': case 'o':
        case 'U': case 'u':cout<<number<<" es una vocal"<<endl;
                 break ;
        default:    cout<<"Es una consonante"<<endl;
    }

    return 0;
}