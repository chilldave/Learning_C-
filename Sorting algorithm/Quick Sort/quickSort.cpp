#include <iostream>
#include <vector>

using namespace std;

void printnumbers(vector<int> numbers);
void quickSort(vector<int>&numbers);
void auxQuickSort(vector<int>& numbers, int limite_izquierdo, int limite_derecha);


int main(){

    vector<int> numbers = {23,4,5,6,78,9};
    printnumbers(numbers);
    cout<<endl;
    quickSort(numbers);
    cout<<endl;
    printnumbers(numbers);
    return 0;
}

void auxQuickSort(vector<int>& numbers, int limite_izquierdo, int limite_derecha){

    int izq = limite_izquierdo;
    int der = limite_derecha;
    int pivote = numbers[(izq + der )/ 2];
    int temporal;
    do{
        while(numbers[izq]<pivote && izq<limite_derecha)
        {
            ++izq;
        }
        while(pivote < numbers[der] && der>limite_izquierdo)
        {
            --der;
        }
        if(izq<=der){  
            temporal = numbers[izq];
            numbers[izq] = numbers[der];
            numbers[der]= temporal;
            ++izq;
            --der;
        }

    }while(izq <= der);
    if(limite_izquierdo < der)
    {
        auxQuickSort(numbers,limite_izquierdo,der);
    }

    if(limite_derecha >  izq)
    {
        auxQuickSort(numbers,izq,limite_derecha);
    }

}

void quickSort(vector<int>&numbers){
    auxQuickSort(numbers,0,numbers.size()-1);
}  

void printnumbers(vector<int> numbers){
    const int final = numbers.size();
    for(int a = 0; a<final; a++)
    {
        cout<<numbers[a]<<"  ";
    }
}