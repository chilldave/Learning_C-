#include <iostream>

using namespace std;
class Room{
    public: 
        double length;
        double breadth; //width
        double height;
        double calculateArea(){
            return length * breadth;
        }
        double calculateVolume(){
            return length * breadth * height;
        }

};


int main(){
    //Create a object of Room Class
    Room room1;

    //assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    //calculate and display the are and volume of the room
    system("figlet -c 'ROOM 1'");
    cout<<"\n\tArea of Room: "<<room1.calculateArea()<<endl;
    cout<<"\n\tVolume of Room: "<<room1.calculateVolume()<<endl<<endl;





    return 0;
}