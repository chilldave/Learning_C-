#include <iostream>
using namespace std;
char str1[30];
void processnew();
void processcomplete();
void showarray();
int main() {
    //processnew();
    processcomplete();
    showarray();
    return 0;
}
void processnew(){
    char str[30];
    cout << "Enter your city name: ";
    cin >> str;
    // The user input will be stored in the str variable 
    cout << "You have entered: " << str<<endl;
}
void processcomplete(){
    //char str1[30];
    cout<<"Enter your city name: ";
    cin.get(str1,50);
    cout<<"You have entered: "<<str1<<endl;
}

void showarray(){
    for (int i = 0; i<30; i++)
    {
        cout<<i<<": "<<str1[i]<<"\n";
    }
    
}