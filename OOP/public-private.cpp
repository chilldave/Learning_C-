#include <iostream>

using namespace std;

//define a class
class Sample{
    //public elements
    /*
    public:
        int age;
        void displayAge(){
            system("figlet -c 'AGE'");
            cout<<"- Age = "<<age<<endl;
        }
    */
   private: 
    int age;
    public:
    void displayAge(int a){

        age = a;
        cout<<"Age = "<<age<<endl;
    }
};

int main(){

    //declare a class object
    int ageInput;

    Sample obj1;

    cout<<"- Enter your age: ";
    //store input in age of the obj1 object
    cin>>ageInput;
    //call class function
    obj1.displayAge(ageInput);

    return 0;
}