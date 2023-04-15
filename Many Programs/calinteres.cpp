#include <iostream>
#include <cmath>

using namespace std;

//prototype
double calcInterest(double amt, int yrs, double rate);

int main(){

    double amount, r;
    cout<<"Enter the amount: "; cin>>amount;
    cout<<"Enter the rate of Interest: "; cin>>r;

    double interest = calcInterest(amount,30,r);
    cout<<"Interest: "<<interest<<endl;
    
    return 0;
}

double calcInterest(double amt, int yrs, double rate)
{
    double aux=0;
    aux = amt*pow(rate/12,12*yrs);

    return aux;
}
