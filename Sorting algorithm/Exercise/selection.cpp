#include <iostream>

using namespace std; 

int main(){

    int numbers [] = {23,90,-2,45,6,1,2};
    int log = sizeof(numbers)/sizeof(numbers[0]);
    int temp;

    for(int i = 0; i<log ; i++)
    {
        int mix_possition = i;
        for(int j = i+1; j<log ; j++){
            if( numbers[j]<numbers[mix_possition]) 
            {
                mix_possition = j;
            }
        }

        //Swap
        temp = numbers[i];
        numbers[i] = numbers[mix_possition];
        numbers[mix_possition] = temp;
    }

    for(int x = 0; x<log; x++)
        cout<<numbers[x]<<"  "<<endl;
    return 0;
}