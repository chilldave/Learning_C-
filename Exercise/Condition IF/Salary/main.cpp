#include <iostream>

using namespace std;
int main(){

    //Program calculate the total salary + extra hours
    int laborDays=0;
    const float amountByHour = 20.00;
    float salary =0;
    cout<<"Enter, how many days have you worked? : "; cin>>laborDays;
    cout.precision(2);
    cout<<fixed;
    //salary = laborDays * salary;
    cout<<"\n\t\tSalary"<<endl;
    if(laborDays >= 0 && laborDays <= 40 )
    {
        salary = laborDays * amountByHour;
        cout<<"your salary is : $"<<salary<<endl;
    }else if (laborDays > 40){
        cout<<"\nYour salary without extra hours: $800.00"<<endl;
        int extraHours = 0;
        extraHours = laborDays-40;
        cout<<"You worked "<<extraHours<<" extra hours"<<endl;
        extraHours *= 25; 
        salary = (laborDays * amountByHour) + extraHours;
        cout<<"your salary + extra hours is: $ "<<salary<<endl<<endl;
    }else{
        cout<<"Please enver a valid number.\n\n";
    }
    return 0;

}