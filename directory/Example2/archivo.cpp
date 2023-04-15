#include <iostream>
#include <fstream>
using namespace std;

void write1to10();
void read1to10();

int main(){
    write1to10();
    read1to10();
    return 0;
}
void read1to10(){
    ifstream g;
    int i,dato;
    g.open("datos.txt");
    if(!g)
        cout<<"Error opening the file";
    else{
    for ( i = 1; i <= 10; i++)
    {
        /* code */
        g >> dato;
        cout<<i<<": "<<dato<<endl;
    }
    }
    g.close();
    

}
void write1to10(){
    //declare variables
    ofstream f;
    int i;
    //open file
    f.open("datos.txt",ios::app);
    //verify that exists one file
    if(!f)
        //error if the file can't be opened
        cout<<"ERROR opening the file"<<endl;
        //the file could be opened and follow the commands
    else{
        for ( i = 1; i <=10; i++)
        {
            /* code */
            int aux;
            cout<<"Insert a number: \n";
            cin>>aux;

            f << aux<<endl;
        }
    }
    f.close();
}
