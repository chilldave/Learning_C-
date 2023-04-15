#include <iostream>

using namespace std;


int main(){

    int numbers[]= {2,3,4,6,5};
    int log = sizeof(numbers)/sizeof(numbers[0]);
    int aux;

    for(int j = 0; j < log -1; j++)
    {
        int swapped=0;
        for(int x = 0; x < log-1-j; x++)
        {
        
            if(numbers[x]>numbers[x+1])
            {
                aux = numbers[x];
                numbers[x] = numbers[x+1];
                numbers[x+1] = aux; 
                swapped = 1;
            }
        }
        if(swapped == 0 )
        break;
    }

    for(int x =0; x<log; x++){
        // cout<<x+1<<" : "<<endl;
        cout<<numbers[x]<<"  ";
    }
    cout<<"\n";
    //cout<<log<<endl;

    return 0;
}