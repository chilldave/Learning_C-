#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    fstream f("mary.txt",ios::in);
    string word;
    cout<<"SHOW INFORMATION"<<endl;
    if(f.is_open())
    {
        //getline(f,word);
        while(f)
        {
            cout<<word<<endl;
            getline(f, word);
        }
        /*
        for(int i=1; i<=5; i++)
        {
        //f >> word;
        getline(f,word,'\n');
        cout<<word<<endl;
        }*/
        f.close();
    }
    else{
        cout<<"ERROR"<<endl; 
    }
    return 0;
}