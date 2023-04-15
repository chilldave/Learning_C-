#include <iostream> 
#include <vector>
#include <array>

using namespace std;


int main(){

//    int data[] = {1,3,5,7,9,11};

   // array<int,50> myarray={9,8,7,6,7};
    char string[] = "some characters in C++!";
    int s_count = 0;
    for( char n : string )
    {
        if(n == 's')
            s_count++;


    }
    cout<<"S count:" <<s_count<<endl;
    cout<<"\n\n";
    /*
    for (int i = 0; i < 6; i++)
    {
        /* code
        cout<<data[i]<<"\t";
    }
    cout<<"\n";
    */

     

    return 0;
}