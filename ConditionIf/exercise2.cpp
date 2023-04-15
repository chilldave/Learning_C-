#include <iostream>

using namespace std;

int main(){
    /*¿Qué valor se asigna a consumo en la sentencia if siguiente si velocidad es 120?*/
     int x=0;
    
    if(x>=0)
        ++x;
    else if(x>=1)   
        x+=2;
    
    cout<<x<<endl;
    x =0;
    if(x>=0)
        ++x;
    if(x>=1)
    x+=2;
    cout<<x<<endl;
    

    return 0;
}