#include <iostream>

using namespace std;
int max(int a, int b);

int main()
{
    //La funcion puede ser reutilizada sin importar 
    int x , y , z;
    cin>>x>>y;
    z = max(x,4);
    cout<<z<<endl;
    cout<< max(x,y)<<endl;
    return 0;    
}

int max(int a, int b)
{
    if(a>b)
        return a;
    else 
        return b;
}