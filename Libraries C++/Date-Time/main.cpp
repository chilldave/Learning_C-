#include <iostream>
#include
#include <ctime>

using namespace std;

int main(){

    //Use time() with NULL argument 
    time_t current_time;
    current_time = time(NULL);
    
    cout<<current_time;
    //cout<<"Seconds has passed since 00:00:00 GMT, Jan 1, 1970";


    cout<<"\n";
    
    

    return 0;
}