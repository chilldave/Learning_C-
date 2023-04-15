#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/*
Opentype 
"r"         open a file for reading, the file has to be created.
"w"         open a file for writing, it mighit create the file or overwrite if the file exists
"a"         open a file for writing to the end of the file, if it doesn't exist, will create it
"r+"        open a file for writing and reading, the file must be created
"w+"        create a file for writing and reading,  it mighit create the file or overwrite if the file exists

*/
using namespace std;

int main(){

    FILE    *f;
    f = fopen("./Files/IN/information.txt","r+");
    if(f==NULL)
        f = fopen("./Files/IN/information.txt","w+");
    
    int op;
    char cadena[50];

    do{
        cout<<"\tOPTIONS MENU"<<endl;
        cout<<"1. Writing "<<endl;
        cout<<"2. Reading "<<endl;
        cout<<"3. Exit "<<endl;
        cout<<"\nEnter a option you want to look for: ";
        cin>>op;
        
        
        switch(op){
            //Writing
            case 1:
                cout<<"Enter the information that you want to save in the file: "<<endl;    
                cin>>cadena;
                fprintf(f,cadena);
                cout<<"Writing done"<<endl; 
                break;
            //Reading
            case 2: 
                break;
            //Exit
            case 3: 
                cout<<"Closing to the form"<<endl;
                break;
            default:
                cout<<"# no valid, enter a #"<<endl;
                break;
        }
    }while(op !=3);

    
    fclose(f);
     
    return 0;
}