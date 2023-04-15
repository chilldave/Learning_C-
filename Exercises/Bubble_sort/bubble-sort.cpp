#include <iostream>
#include <fstream>

using namespace std;

void ask_information(int arra[], int cnt);
void show_bubblesort(int ar[], int cont);
void bubble_sort(int array[], int count);
void save_txt(int list[], int a);
int main(){

    /*Create a program which orders an array [bubble sort] and save it in a .txt and count
    how many times the program has to order
    */
   int x;
   cout<<"Enter how many numbers want to order: "<<endl; cin>>x;
   int number[x]; //{20,50,1,10};
   //int log = sizeof(number)/sizeof(number[0]);
   ask_information(number, x);
   cout<<"Vector No ordering"<<endl;
   show_bubblesort(number,x);
   bubble_sort(number,x);
   cout<<"Vector already ordered"<<endl;
   show_bubblesort(number,x);
   save_txt(number,x);
    return 0;
}
void show_bubblesort(int ar[], int cont){
    for (int i = 0; i < cont; i++)
    {
        cout<<"position ["<<i<<"] :"<<ar[i]<<endl;
    }
}
void bubble_sort(int array[], int count){
    for(int i=0; i < count-1 ; i ++)
    {
        cout<<"Vuelta: "<<i+1<<endl;
        int swap = 0;
        for (int j = 0; j < count-i-1; j++)
        {
            int aux = 0;
            if(array[j]>array[j+1])
            {
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux; 
                swap = 1;      
            }
            show_bubblesort(array,count);
            cout<<endl;
        }    
        if(swap == 0)
            break;
    }
}

void save_txt(int list[], int a){
    ofstream g;
    int i;
    g.open("bubble_sort.txt", ios::app);
    if(!g)
        cout<<"Error opening the file"<<endl;
    else{
        for (i = 0; i < a; i++)
        {
            int aux = list[i];
            g <<aux<<endl; 
        }
    }
    cout<<"Data already copied"<<endl;
    g.close();
}
void ask_information(int arra[], int cnt){  
    int k=0;
    for(k;k<cnt; k++)
    {
        cout<<"Enter a value: "<<endl;
        cin>>arra[k];
    }
}