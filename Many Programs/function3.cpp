#include <iostream>

using namespace std;

double avg(int x,int y);

int main()
{
    int i,p; double o;
    cout<<"Enter 2 numbers: ";
    cin>>i>>p;
    o = avg(i,p);
    cout<<"\nTotal: "<<o<<endl;
    o = avg(i,2);
    cout<<"\nTotal: "<<o<<endl;
    return 0;
}

double avg(int x,int y)
{
    double sum = x + y;
    return sum/2.0;
}