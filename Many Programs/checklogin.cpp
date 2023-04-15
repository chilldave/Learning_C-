#include <iostream>
#include <string>
using namespace std;

bool checklogin(string a);
void ans(bool x);

int main(){
    string pass= "Micro 22";
    bool checkout;
    checkout = checklogin(pass);
    //cout<<checkout<<endl;
    ans(checkout);
    return 0;
}
bool checklogin(string a){
    string receivepasw;
    cout<<"Insert your password: ";
    cin>>receivepasw;
    return a==receivepasw;
}

void ans(bool x){
    if(!x)
        cout<<"Try again";
    else
        cout<<"Welcome!";
}


