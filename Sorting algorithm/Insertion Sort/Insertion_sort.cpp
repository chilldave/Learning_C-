#include <iostream>

using namespace std;

void insertionsort(int list[],int aux);
void printinsertionsort(int lst[], int limit);
void fillarray(int lit[], int a);

int main(){
    int x;
    cout<<"Enter a limit of the array: "; cin>>x;
    int list_array[x];
    fillarray(list_array, x);    
    insertionsort(list_array,x);
    cout<<"Insert Sort \n";
    printinsertionsort(list_array,x);
    
    return 0;
}

void fillarray(int lit[], int a){
for (int i = 0; i < a; i++)
    {
        /* code */
        cout<<"Enter a number: "; cin>>lit[i];
        //cout<<"\n";
    }
}

void insertionsort(int list[] , int aux){

    for (int i = 0; i < aux; i++)
    {
        int pos, value;
        pos = i; //   0 | 1 | 2 | 3 | 4 | etc...
        value= list[i];//  10 | 1| 23|23

        while ((pos > 0) && (list[pos-1] >value))
        {
            list[pos] = list[pos-1];
            --pos;
        }
        list[pos] = value;
    }
}

void printinsertionsort(int lst[], int limit)
{
    for(int y=0; y<limit; y++)
    {
        cout<<y<<": "<<lst[y]<<endl;
    }
}