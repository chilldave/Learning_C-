#include <iostream>
#include <vector>
using namespace std;


int main(){
    
    vector<int> number;
    int y;
    cout<<"\tNumbers"<<endl;
    for(int x=0; x<2; x++){
        cout<<"Enter a number : ";cin>>y;
        number.push_back(y);

    }
    
    //Conditions

    if(number[0]>=number[1]){
        cout<<"The largest # is : "<<number[0]<<endl;
    }else{
        cout<<"The largest # is : "<<number[1]<<endl;
    }



    return 0;
}