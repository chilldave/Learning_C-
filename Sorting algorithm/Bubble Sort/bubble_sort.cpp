#include <iostream>
//bubble sort
using namespace std;

void bubblesort(int ar[],int m);
void printarray(int arr[], int aux);

int main(){
    int x = 0;
    cout<<"Enter the limit of the array: "; cin>>x; cout<<"\n";
    int array[x];
    //Fill in the array 
    for (int i = 0; i < x; i++)
    {
        cout<<"Enter a number: ";
        cin>>array[i];

        cout<<"\n";
    }
    //bubblesort with a function
    bubblesort(array,x);
    cout<<"Ordered Array"<<endl;
    //show array with a function
    printarray(array,x);
    system("pause");
    return 0;
}

void bubblesort(int ar[],int m)
{
    for (int j = 0; j < (m-1); j++)
    {
        int swapped=0;
        for (int p = 0; p < (m-j-1); p++)
        {
            int aux;
            if(ar[p]>ar[p+1]){
                //int aux=0;
                aux=ar[p+1];
                ar[p+1]=ar[p];
                ar[p] = aux;

               swapped = 1;
            }
        } 
        // no swapping means the array is already sorted
        // so no need of further comparison
        if (swapped == 0)
        break;
    }
}
//Show Array ordered
void printarray(int arr[], int aux){
    for (int x = 0; x < aux; x++)
    {
        cout<<x<<": "<<arr[x]<<endl;
    }
}