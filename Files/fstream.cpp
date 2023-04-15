#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // the file should be created first;
    /*
    fstream doc ("/Files/src/data.txt", ios::out | ios::app) ;
    if(doc.is_open())
    {
        doc << "This is a line.\n";
        doc << "This is another 1 line.\n";
        doc.close();
    }else{
        cout<<"Unable to open file"<<endl;
    }
    */
   int x,y,z;
    fstream archivo;
    archivo.open("dato.txt");
    if(!archivo)
    {
        cout<<"Error open the file"<<endl;

    }
    x =0;
    y = 1;
    z = 2;
    archivo << "Hola archivo" <<9 <<endl;
    archivo << x << " "<< y << " " << z<<endl;




    return 0;
}