#include <iostream>
//#include <string.h>

using namespace std;

int main(){


    char space[10] = {'C','a','r','L','o','s'}; 

    int lon = sizeof(space)/sizeof(space[0]);

    for(int i=0; i<10; i++){
         
        if( space[i] != ' ')
        {
        cout<<"position ["<<i<<"] : "<<space[i]<<endl;
        }
        else if(space[i]== ' '){
           space[i] = '0';
        }
    }
    
    //fflush(stdin);
    //cout<<": "<<word<<endl;
    
    cout<<lon<<endl;


    //getch();
    return 0;
}
