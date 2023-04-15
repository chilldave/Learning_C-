#include <iostream>

using namespace std;
void PrintArray(int num[], int y);
void BubbleSort(int num[] , int x);
void InsertionSort(int numb[], int z);
void SelectionSort(int numb[], int o);

int main(){

    int arrays[] = {23,56,7,2,0,1,67,864,32,34,59,23,45,89,549};
    int log = sizeof(arrays)/ sizeof(arrays[0]);

    cout<<"\tBubble Sort - Part 1."<<endl;
    BubbleSort(arrays,log);
    cout<<"\tInsertion Sort - Part 2."<<endl;
    InsertionSort(arrays,log); 
    cout<<"\tSelection Sort - Part 3."<<endl;
    SelectionSort(arrays,log);
    return 0;
}
void PrintArray(int num[], int y){
    for(int i = 0; i<y; i++){
        cout<<num[i]<<"  ";
    }
    cout<<"\n\n";
}

void BubbleSort(int num[], int x){
    int aux;
    for(int j =0; j<(x-1); j++){
        int swapped =0;
        for(int k = 0; k < (x-j-1); k++)
        {
            if(num[k]>num[k+1])
            {
                aux = num[k];
                num[k] = num[k+1];
                num[k+1] = aux;
                swapped = 1;
            }
        }
        if(swapped == 0)
        break;
    }
    PrintArray(num,x);
}

void InsertionSort(int numb[], int z){
    for(int i =0; i<z; i++)
    {
        int position = numb[i];
        int j = i-1;
        while((j>=0) && position<numb[j])
        {
            numb[j+1] = numb[i];
            --j;
        }
        numb[j+1] = position;
    }
    PrintArray(numb,z);
}

void SelectionSort(int numb[], int o){
    for(int j =0; j < o-1;j++)
    {   //First position
        int min=j;
        //Comodin -> change variable 
        int aux;

        for(int k =j+1; k< o; k++)
        {
            if(numb[k]<numb[min])
            {
                min = k;
            }
        }
        //Swap
        aux = numb[j];
        numb[j] = numb[min];
        numb[min] = aux;
    }
    //Display
    PrintArray(numb,o);

}