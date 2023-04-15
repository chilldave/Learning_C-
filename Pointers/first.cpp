#include <iostream>


using namespace std;


int main(){
    
    int n = 75;
    //int p = n;
    int * p = &n;
    *p = 100;
    cout<<n<<"    "<<&n<<endl;
    cout<<*p<<"    "<<p<<endl;
    

   //char cd[] = "Mi nombre";
   //char *c;
   //c = cd;

    //cout<<"cd[]: "<<cd<<"    "<<"&cd: "<<&cd<<endl;
    //cout<<"*c: "<<c<< "    "<<"&c: "<<&c<<endl; 
    /*
    int age;
    int * p_edad;
    p_edad = &age;
    *p_edad = 50;
    cout<<age<<endl;
    cout<<*p_edad<<endl;
    */
    return 0;
}