#include <iostream>
#include <conio.h>

using namespace std;

struct Employee{
    char name[20];
    float salary;
}emp[100];


int main(){
    //Employee emp[100];
    int n_employees, posM=0, posm = 0;
    //int bytes = sizeof(emp);
    
    float mayor=0, menor = 999999999;
    cout<<"Enter the number of employees: "<<endl;
    cin>>n_employees;
    
    for(int i=0; i <n_employees; i++)
    {
        fflush(stdin);
        cout<<"Enter your name: ";
        cin.getline(emp[i].name,20,'\n');
        cout<<"Enter your salary: ";
        cin>>emp[i].salary;
        cout<<"\n";

        if(emp[i].salary > mayor)
        {
            mayor = emp[i].salary;
            posM = i;
        }
        else if(emp[i].salary< menor)
        {
            menor = emp[i].salary;
            posm = i;
        }
    }
        cout<<"The mayour salary employee: "<<emp[posM].name<<"------"<<emp[posM].salary<<endl;
        cout<<"The menor salary employee: "<<emp[posm].name<<"------"<<emp[posm].salary<<endl;
    
    //cout<<bytes<<endl;


    getch();

    return 0;
}