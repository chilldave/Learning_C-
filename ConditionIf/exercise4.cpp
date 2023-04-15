#include<iostream>
#include<cstdio>

using namespace std;


int main(){

    int grade;
    cin>>grade;

    if(grade>100)
        puts("Alta");
    else
        puts("Baja");
    cout<<endl;
    return 0;
}