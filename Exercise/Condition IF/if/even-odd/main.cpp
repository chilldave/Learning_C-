#include <iostream>

using namespace std;

int main(){

    int number, digit1,digit2,digit3;
    
    /* cout<<"Enter a number: "; cin>>number;
    if((number%2) == 0)
    {
        cout<<"The number is an even number : "<<number<<endl;
    }else{
        cout<<"The number is an odd number : "<<number<<endl;
    } */

    cout<<"Enter a number of three digits : "; cin>>number;

    digit1 = number % 10;
    digit2 = number / 10; digit2 %= 10;
    digit3 = number / 100; digit3 %=10;

    /* cout<<"Digit 1 : "<<digit1<<endl;
    cout<<"Digit 2 : "<<digit2<<endl;
    cout<<"Digit 3 : "<<digit3<<endl; */

    if(99<number && number<1000)
    { 
        if(int(digit1) != int(digit3))
        {
            cout<<"The first and third digits are not the same"<<endl;
        }
        else{
            
            cout<<"The first and third digits are the same"<<endl;
        }
    }else{

        cout<<"The number is out of the range. \n";
    }

    return 0;


}