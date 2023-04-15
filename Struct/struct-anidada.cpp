#include <iostream>
#include <conio.h>
using namespace std;

struct info_address
{
    char address[30];
    char city[20];
    char state[20];
};

struct employee
{
    char name[20];
    info_address dir_employee;
    double salary;
    
}empleados[2];

int main(){

    for(int i=0; i<2; i++)
    {
        fflush(stdin);//empty fuffer 
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].name,20,'\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_employee.address,30,'\n');
        cout<<"Ciudad: ";
        cin.getline(empleados[i].dir_employee.city,20,'\n');
        cout<<"Provincia: ";
        cin.getline(empleados[i].dir_employee.state,20,'\n');
        cout<<"Salario: ";
        cin>>empleados[i].salary;
        cout<<endl;
    }

    //Print the information

    for(int x=0; x<2; x++)
    {
        cout<<"Nombre: "<<empleados[x].name<<endl;
        cout<<"Direccion: "<<empleados[x].dir_employee.address<<endl;
        cout<<"Ciudad: "<<empleados[x].dir_employee.city<<endl;
        cout<<"Provincia: "<<empleados[x].dir_employee.state<<endl;
        cout<<"Salario: "<<empleados[x].salary<<endl;
        cout<<"\n";




    }

    return 0;
}