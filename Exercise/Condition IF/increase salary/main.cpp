#include <iostream>

using namespace std;

int main(){

    float salary = 0;
    float disccount = 0;

    cout<<"Enter your salary: "; cin>>salary;

    cout<<"Your salary is $"<<salary<<endl<<endl;

    if(salary < 2000)
    {

        disccount = salary * 0.10;
        salary += disccount;
        cout<<"your salary's been increased an 10% \n";
        cout<<"Your new salary is: $"<<salary<<endl;
    }
    else{
        disccount = salary * 0.05;
        salary += disccount;
        cout<<"your salary's been increased an 10% \n\t";
        cout<<"Your new salary is: $"<<salary<<endl;
    }
    return 0;

}