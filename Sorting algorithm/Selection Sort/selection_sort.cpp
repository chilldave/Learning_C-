#include <iostream>

using namespace std;

void selectionsort(int ar[], int aux);
void printsort(int arr[], int ax);
void swapsort(int& a , int& b);


int main(){

    int array1[]={100,120,40,30,0};
    int log = sizeof(array1)/sizeof(array1[0]);

    selectionsort(array1 , log);
    printsort(array1, log);
    //swapsort(array1 , log);
    
    return 0;
}

void selectionsort(int ar[], int aux){

    for (int i = 0; i < aux-1; i++)
    {
        int comodin=0;
        int position = i;
        for (int j = i + 1; j < aux; j++)
        {
            if(ar[j] < ar[position])
            {
                position=j;
            }
        } 
        swapsort(ar[position], ar[i]);
        /*
        comodin = ar[i];
        ar[i] = ar[position];
        ar[position] = comodin;
        */
    }

}
void printsort(int arr[] , int ax)
{
    for (int i = 0; i < ax; i++)
    {
        cout<<": "<<arr[i]<<"    ";
    }
} 

void swapsort(int& a , int& b){
        int comodin=0;
        comodin = a;
        a = b;
        b = comodin;
        /*
        ar[i] = ar[position];
        ar[position] = comodin;
        */
}