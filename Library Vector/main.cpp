#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <ctime>

using namespace std;
int main(){


    vector<int> vector1 = {3,45,67,8,86,234,5,6,7,8,7};

    for(auto i =  vector1.begin(); i != vector1.end(); i++)
    {
        cout<<*i<<"\t";
    }
   // x = vector.end();

    /*
    std::vector <int> vect = {1,2,3};

    vect.push_back(40);
    std::cout<<vect[0]<<std::endl;
    std::cout<<vect[1]<<std::endl;
    std::cout<<vect[2]<<std::endl;
    
    //size(); we get the total size of the array
    std::cout<<vect.size()<<std::endl;

    */
   /*
    int num;
    vector<int> vect;
    cout<<"HOw many numbers do yo want to enter? :";
    cin>>num;
    for(int i=0; i<num; i++)
    {
        int numero;
        cout<<i+1<<"Enter a number : "; cin>>numero;
        //push_back -> add data to the end of the vector
        vect.push_back(numero);

    }
    /*
    for(int i=0 ; i < vect.size(); i++ )
    {
        cout<<"["<<i<<"]"<<" : "<<vect[i]<<endl;
    }
    */



    return 0;

    

}