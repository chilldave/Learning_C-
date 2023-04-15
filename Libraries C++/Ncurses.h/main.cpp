#include <iostream>


using namespace std;

int main()
{
    system("clear");
    system("figlet -c 'Ejercicio 1\n'");
    int x;  //declaración de la variable x 
cout << "Ingrese un numero"<<endl; 
cin>> x; 

if (x >= 100 && x <= 999)   
 { cout<<"El numero "<<x<< " tiene tres digitos"<<endl; } 
 else  
  { cout<<"El numero "<<x<< "  no tiene tres digitos"<<endl; } 
  
  return 0;
    
    
}