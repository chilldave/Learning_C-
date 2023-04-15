
#include <iostream>

using namespace std;

int fibonnacii(int);
int main(){

    int a;
    cout<<"Enter a number : "; cin>>a;
    for(int i = 0; i<a;i++){

        cout<<" "<<fibonnacii(i);
    }
    return 0;
}

int fibonnacii(int a){

    if((a == 1) || (a==0)){
        return a;
    }else{
        return fibonnacii(a-1) + fibonnacii(a-2);
    }

}