#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){
    char vec[25] = "Hello World";
    char vec2[25]= "Hello World";
    char vec3[25]= "Come Mucho";
    string saludo = "Hello World";
    saludo[4]= '+';
    cout<<saludo<<endl; 
    cout<<vec<<endl;

    //Lenght
    int cant= strlen(vec);
    int cantS= saludo.length();
    //strlen = longitud of the array
    cout<<cant<<"----"<<cantS<<endl;

    //Copy    
    strcpy(vec2,vec);
    string saludo2;
    saludo2=saludo;

    cout<<saludo2<<endl;

    cout<<vec2<<endl;


    //Concatenar
    
    strcat(vec3,vec2);
    cout<<vec3<<endl;

    string saludo3 = saludo2+saludo;
    cout<<saludo3<<endl;

    /*
        \n jum on line
        \t tab
        \b delete a character 
        \0 finish character
    
    
    
    */



    system("pause");


    return 0;
} 