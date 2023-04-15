#include <iostream>
#include <cstdio>
#include <stdio.h>
// #include <string.h>
#include <stdlib.h>


using namespace std;

int main(){
    
   
    string date;
    char numero[2];
    int number, i=0, min;

    cout<<"Ingrese la fecha: ";
    cin>>date;
    
    while(i<=1)
    {       
         numero[i] = date[i];
         ++i;
    }
    number = atoi(numero);
    i =0;
    int j =3;
    while(j<=4)
    {       
         numero[i] = date[j];
         ++i;
         ++j;
    }

    min = atoi(numero);
    if(number<12){
        cout<<number<<":"<<min<<" AM"<<endl;
    }else{
     switch(number){
        case 12: cout<<"1 :"<<min<<" PM"; break;
        case 13: cout<<"1 :"<<min<<" PM"; break;
        case 14: cout<<"2 :"<<min<<" PM"; break;
        case 15: cout<<"3 :"<<min<<" PM"; break;
        case 16: cout<<"4 :"<<min<<" PM"; break;
        case 17: cout<<"5 :"<<min<<" PM"; break;
        case 18: cout<<"6 :"<<min<<" PM"; break;
        case 19: cout<<"7 :"<<min<<" PM"; break;
        case 20: cout<<"8 :"<<min<<" PM"; break;
        case 21: cout<<"9 :"<<min<<" PM"; break;
        case 22: cout<<"10 :"<<min<<" PM"; break;
        case 23: cout<<"11 :"<<min<<" PM"; break;
        case 24: cout<<"12 :"<<min<<" PM"; break;

        default:
        cout<<"Numero no encontrado"<<endl;
       

    }   
    }

    return 0;
}