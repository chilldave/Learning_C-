#include <iostream>
#include <vector>

using namespace std;
void merge(vector<int>&arreglo,int inicio, int mitad, int final){

    int i,j,k;
    int elementLeft = mitad - inicio + 1;
    int elementRight = final - mitad;
    vector<int> izquierda(elementLeft);
    vector<int> derecha(elementRight);

    for(int i=0; i<elementLeft; i++)
    {
        izquierda[i] = arreglo[inicio+i];
    }
    for(int j=0; j<elementRight; j++){
        derecha[j] = arreglo[mitad+1+j];
    }
    i = 0;
    j = 0;
    k = inicio;

    while(i<elementLeft && j<elementRight){

        if(izquierda[i]<= derecha[j]){
            arreglo[k] = izquierda[i];
            i++;
        }else{
            arreglo[k] = derecha[j];
            j++;
        }
        k++;
    }
    while(j<elementRight)
    {
        arreglo[k] = derecha[j];
        j++;
        k++;

    }
    while(i<elementLeft){
        arreglo[k] = izquierda[i];
        i++;
        k++;
    }


}
void printarrray(vector<int> arreglo){
    for(int i = 0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<"  ";
    }
    cout<<endl;
}
//Pasamos los parametros de un arreglo, inicio y final 
void mergeSort(vector<int>& arreglo, int inicio, int final){

    if(inicio < final){
        int mitad = inicio + (final-inicio)/2;

        mergeSort(arreglo,inicio,mitad);
        mergeSort(arreglo,mitad+1, final);
        mergeSort(arreglo,inicio,mitad);

    }
}

int main(){

    vector<int> prueba1 = { 12,0,6,2,34,1};
    printarrray(prueba1);
    mergeSort(prueba1,0,prueba1.size()-1);
    printarrray(prueba1);

    return 0;
}