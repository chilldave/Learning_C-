#include <iostream>

using namespace std;
void example(int x);

int main()
{
    int x;
    cout<<"Enter a number: ";cin>>x;
    example(x);
    cout<<"X is "<<x<<endl;

    return 0;
}
void example(int x){
    x = x+1;
}