#include <iostream>

using namespace std;

float disscount10(float);
float disscount20(float);
float disscount40(float);



int main(){
    //Program of shoes store
    const int price = 80;
    int quantity=0;
    float amount=0;
    bool x=true;

    while(x){
    //Asking information 
    cout<<"Shoes Store \"Hello Mucha\"\n";
    cout<<"Purchased shoes: "; cin>>quantity;
    amount = quantity * price ;
    //Checking the information 
    //
    cout.precision(2);
    cout<<fixed;
    if(quantity<10)
    {   
        cout<<"The total amount is: $"<<amount;
    }else if (quantity < 20)
    {
        cout<<"You received an 10 porcentage disscount. ";
        cout<<"The total amount is: $"<<disscount10(amount);
    }else if (quantity < 30)
    {
        cout<<"You received an 20 porcentage disscount. ";
        cout<<"The total amount is: $"<<disscount20(amount);
    }else {
        //cout<<"The total amount is: $"<<amount;
        cout<<"You received an 40 porcentage disscount. ";
        cout<<"The total amount is: $"<<disscount40(amount);
    }
    char p;
    while(true)
    {
        cout<<"\n\nDo you want to try again? (y/n) \n";
        cin>>p;
        if(p == 'Y' || p == 'y')
        {
            break;
        }else if(p == 'N' || p == 'n')
        {
            x = false; 
            break;
        }else{
            cout<<"Comando no reconocido, ingrese (y/n)\n";
        }
    }
    }
    cout<<"\n\n";

    return 0;
}

float disscount10(float x){
    return x - (x*0.10);
}
float disscount20(float y){
    return y - (y*0.20);
}
float disscount40(float z){
    return z - (z*0.40);
}