#include <iostream>
#include <array>

using namespace std;


int main(){

    array<int,5> numbers = {2,2,2,2,2};
    array<int, 5> compair = {2,2,2,2,2};
    array<int, 10> newone;

    for(int i = 0 ;i<10 ; i++)
    {
        if(i < 5)

            newone[i] = numbers[i];
        else if (i>4)        
            newone[i] = compair[i-5];
    }

    for(int i=0; i<10; i++)
    {
        cout<<"newone ["<<i<<"]: "<<newone[i]<<endl;
    }
    
    int acumulate;
    for(int k=0; k<10;k++)
    {
        
        acumulate += newone[k];

    }
    cout<<"The total amount of the values is: "<<acumulate<<endl;

    return 0;
}