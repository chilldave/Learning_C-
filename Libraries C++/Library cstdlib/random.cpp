#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
    //Random # without limit
    for(int k; k<5; k++)
    {
        cout<<rand()<<"\n";
    }
    //Random # with limit 
    for(int i = 0; i<5; i++)
    {
        cout<<rand()%100<<endl;
    }

    

    return 0;
}