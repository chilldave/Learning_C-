#include <iostream>

using namespace std;

int main(){
    int data;
    for(data=0; data<10; data++)
    {
        if(data == 2)
            cout<<"Data is the same as : "<<data<<endl;
        if(data<5)
            cout<<"Data is now : "<<data<<", less than 5"<<endl;
        else
            cout<<"Data is now : "<<data<<", greater than 5"<<endl;
    }

    return 0;
}  