#include <iostream>

using namespace std;

int main(){

    /* Categorie A 10% disccount
            Categorie A 15% disccount
                Categorie A 20% disccount  */
    double disccout [3] = {0.10,0.15,0.20};
    double subtotal;
    char category[2];

    cout<<"Enter the subtotal: $"; cin>>subtotal;
    cout<<"Do you have membresi with us? (y/n): "; cin>>category[0];
    
    while(category[0] == 'Y' || category[0]== 'y'){
        cout<<"Enter your Category: "; cin>>category[1];
        cout.precision(2);
        cout<<fixed;
        if(category[1]=='A' || category[1]=='a'){

            cout<<"You've received an 10\% OFF"<<endl;
            subtotal -= (subtotal*disccout[0]);
            cout<<"The total amount of your order is: $"<<subtotal<<endl<<endl;

        }else if(category[1]=='B' || category[1]=='b'){
            cout<<"You've received an 15\% OFF"<<endl;
            subtotal -= (subtotal*disccout[1]);
            cout<<"The total amount of your order is: $"<<subtotal<<endl<<endl;

        }else if(category[1]=='C' || category[1]=='c'){
            cout<<"You've received an 20\% descuento"<<endl;
            subtotal -= (subtotal*disccout[2]);
            cout<<"The total amount of your order is: $"<<subtotal<<endl<<endl;

        }else{
        cout<<"The total amount of your order is: $"<<subtotal<<endl<<endl;
        }
        category[0] = 'n';
    }
    

    return 0;
}