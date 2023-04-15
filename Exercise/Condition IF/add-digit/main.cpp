#include <iostream>

using namespace std;


int main(){

    // Program that adds the digits of a number
    /* int number, u, d;
    cout<<"Enter a number of 2 digits :"; cin>>number;
    // cout<<number[1]<<endl;
    u = number%10;
    d = number/10; d %=10;

    if(number >9 && number<100)
        cout<<"The total amount of its digits is : "<<u+d<<endl;
    else
        cout<<"The number is less than 0 or not qualify for the condition. "<<endl; */

    int number;
    cin>>number;

    if((number%10)== 4)
        cout<<"The number "<<number<<" ends in 4. "<<endl;
    else 
        cout<<"The number "<<number<<" doesn't end in 4 "<<endl;
    return 0;
}