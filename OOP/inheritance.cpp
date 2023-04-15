#include <iostream>

using namespace std;

class Animal{
    public: 
        void eat(){
            cout<<"I can eat! "<<endl;
        }
        void sleep(){
            cout<<"I can sleep! "<<endl;
        }
};


//derived class
class Dog : public Animal{
    public: 
        void bark(){
            cout<<"I can bark! Woof Woof!! "<<endl;
        }
};

int main(){
    //Create object of the Dog Class
    Dog dog1;
    //Calling members of the base class
    dog1.eat();
    dog1.sleep();

    //Calling member of the derived class
    dog1.bark();
    Animal amnimal;


    return 0;
}