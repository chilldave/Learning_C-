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

    int number,x,y;
    cin>>number;

    if(number <10 || number > 99)
        cout<<"The number is not  elegible"<<endl;
    else{  
        x = number/10;
        y = number%10;
        if((x%2)==0 && (y%2)==0)
            cout<<"All of the digits are even."<<endl;
        else 
            cout<<"The digits aren't even, it's odd. "<<endl;

    }
    return 0;

}