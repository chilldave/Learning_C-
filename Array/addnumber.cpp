#include <iostream>

using namespace std;

int addnumbers(int vector[], int b);

int main(){

    int A = 5;
    int vec[A]= {1,2,3,4,5};
    int final= addnumbers(vec,A);
    cout<<"The total amount is: "<<final<<endl;
    system("pause");
    return 0;
}

int addnumbers(int vector[], int b){
    int aux;
    for (int i = 0; i < b; i++)
    {
        /* code */
        //int aux;
        aux += vector[i];
    }
    return aux;
}