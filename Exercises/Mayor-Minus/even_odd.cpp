#include <iostream>

using namespace std;

int main(){

    //int x;cin>>x;
    int array[] = {120,10,46,9,76,1};
    int x = sizeof(array)/sizeof(array[0]);
    //We have to choose a pivote for making the comparation
    int min = array[0];
    int max = array[0]; 
    int i=0;
    for (i; i < x; i++)
    {
        if(max<array[i])
        {
            max = array[i];
        }
        else if (min>array[i])
        {
            min = array[i];
        }
    }
    cout<<"Max: "<<max<<"     "<<"Min: "<<min<<endl;
    



    return 0;
}