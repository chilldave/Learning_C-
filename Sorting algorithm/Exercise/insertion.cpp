#include <iostream>

using namespace std;

int main(){

    int numbers[] = {45,23,2,3,1,1};

    for(int x = 1;  x < (sizeof(numbers)/sizeof(numbers[0]));x ++ )
    {
        //Pivote     
        int position = numbers[x];
        //Position less pivote
        int aux = x-1;

        //position in the right will verify if the # on left is greater than right

        while( numbers[aux] > position && aux >=0)
        {
            numbers[aux+1]= numbers[aux];
            --aux; 
        }
        numbers[aux+1]= position;
    }

    for(int i =0; i<(sizeof(numbers)/sizeof(numbers[0])); i++)
    {
        cout<<numbers[i]<<"  ";
    }

    return 0;
}