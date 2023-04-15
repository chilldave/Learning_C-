#include <iostream>


using namespace std;

int main()
{
    system("clear");
    system("figlet -c 'Ejercicio 20\n'");
    
 char letra;
cout<< "Ingresa una letra"<<endl;
cin>>letra;

if ((letra == 'a') || (letra == 'A')) 
 { cout<<"Es una vocal"<<endl; } 
else if ((letra == 'e') || (letra == 'E')) 
 { cout<<"Es una vocal"<<endl; } 
else if ((letra == 'i') || (letra == 'I')) 
 { cout<<"Es una vocal"<<endl; } 
else if ((letra == 'o') || (letra == 'O')) 
 { cout<<"Es una vocal"<<endl; } 
else if ((letra == 'u') || (letra == 'U')) 
 { cout<<"Es una vocal"<<endl; } 
else 
 { cout<<"No es una vocal"<<endl; } 
  return 0;
    
}
