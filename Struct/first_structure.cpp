#include <iostream>
//#include <conio.h>

using namespace std;

struct book{
    //int number;
    //char text[100];
    //variables miembros o simplemente miembros
    string title;
    string author;
    string color;
};

int main(){
    
    book first;
    first.title = "Cursos de programacion actualizada\n";
    first.author = "\t David Camey\n";
    first.color = "\tGreen Light\n";
    cout<<first.title<<first.author<<first.color;

    //getch();
    return 0;
}