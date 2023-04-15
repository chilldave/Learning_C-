#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

int main(){
    // no enter the words after space ' ' 
    //string name;
    //cin>>name;
    //cout<<name;
    // it may enter the entire information 
    string name2;
    
    getline(cin,name2,'\n');
    cout<<name2<<endl;
    cin.ignore();
    cout<<name2.length()<<endl;
    getch();

    return 0;
}