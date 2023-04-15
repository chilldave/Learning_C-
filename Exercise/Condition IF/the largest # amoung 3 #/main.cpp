#include <iostream>
#include <array>


using namespace std;

int main(){
    array<int,3> number;
    
    for(int x=0; x<number.size();x++)
    {
        cout<<"Enter a number : "; cin>>number[x];
    }

    //Conditions 

    if((number[0]>=number[1]) && (number[0]>=number[2]))
    {
            cout<<"The largest number is : "<<number[0]<<endl;
    }else if(number[1]>=number[2]){
        cout<<"The largest # is : "<<number[1]<<endl;
    }else{
        cout<<"The largest # is : "<<number[2]<<endl;
    }

    return 0;
}