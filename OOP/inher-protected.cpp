#include <iostream>
#include <string>

using namespace std;

class Animal{
    private:
        string color;
    protected:
        string type;
    public: 
        void eat(){
            cout<<"I can eat! "<<endl;
        }
        void sleep(){
            cout<<"I can sleep! "<<endl;
        }
        void setColor(string clr){
            color =clr;
        }
        string getcolor(){
            return color;
        }
};

class Dog : public Animal{
    public:
    void setType(string tp){
        type  = tp;
    }
    void displayInfo(string c){
        cout<<"I am a "<<type<<endl;
        cout<<"My color is "<<c<<endl;
    }
    void bark(){
        cout<<"I can bark! woof woof!! "<<endl;

    }
};



int main(){
    
    Dog french;

    //Calling members of the base class
    french.eat();
    french.sleep();
    french.setColor("white");
    //calling member of the derived class
    french.bark();
    french.setType("mammal");

    //Using getColor() of french as argument
    //getColor() returns string data 
    french.displayInfo(french.getcolor());



    return 0;
}