#include <iostream>
#include <string>
using namespace std;

void mostrar_palabra(string,int);
int analisis_palabra(string, int);
void desplazamient(string, int);
int main(){

    string palabra = "La  pera   verde";
    int log = palabra.length();
    cout<<log<<endl;
    //mostrar_palabra(palabra,log);
    cout<<"Parejas encontradas: "<<analisis_palabra(palabra,log)<<endl;
    desplazamient(palabra,log);
    mostrar_palabra(palabra,log);
    system("pause");
    return 0;
}
void desplazamient(string word1, int logi1){   
    for (int  i = 0; i < logi1; i++)
    {
        if(word1[i]==word1[i+1]){
            word1[i+1] = word1[i];
        }
    }

}

int analisis_palabra(string word, int logi){
    int counter=0;
    for (int  i = 0; i < logi; i++)
    {
        if(word[i]==word[i+1])
        counter++;
    }
    return counter;
    

}

void mostrar_palabra(string x,int b){

    for (int i = 0; i < b; i++)
    {
        cout<<x[i];
    }
    
}