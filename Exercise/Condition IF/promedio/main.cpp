#include <iostream>

using namespace std;


int main(){

    float grades[3];
    float promedio=0;
    cout<<"\tPromedio de tres notas\n";
    for(int i = 0 ; i < 3 ; i++)
    {
        cout<<"Ingrese las tres notas: ";
        cin>>grades[i];
        promedio += grades[i];
    }
    promedio /= 3;

    cout<<"\nEl promedio del alumno es: "<<promedio<<endl<<endl;
    if(promedio >= 9.5){
        cout<<"Alumno aprobado"<<endl<<endl;
    }else{
        cout<<"Alumno Reprobado"<<endl<<endl;
    }

    return 0;
}