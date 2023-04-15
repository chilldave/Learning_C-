#include <iostream>

using namespace std;

int c;
int main(){


    int *pc;
    pc = &c;

    for(c = 1 ; c <=50; c++)
    {
        cout<<&c<<"::"<<&pc<<endl;

    }

    return 0;
}