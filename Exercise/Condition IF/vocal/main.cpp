#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<char> vowel;
    char a;
    cout<<"\nEnter a number : "; cin>>a;
    vowel.push_back(a);
    
    if(vowel[0] == int('A') || vowel[0] == int('a')){

        // cout<<"The character is a vowel. "<<endl;
        cout<<"The character "<<vowel[0]<<" is a vowel. "<<endl;

    }else if(vowel[0] == 'E' || vowel[0] =='e'){

        //cout<<"The character is a vowel. "<<endl;
        cout<<"The character "<<vowel[0]<<" is a vowel. "<<endl;

    }else if(vowel[0] == 'I' || vowel[0]=='i'){

        cout<<"The character "<<vowel[0]<<" is a vowel. "<<endl;

    }else if(vowel[0] == 'O' || vowel[0]=='o'){

        cout<<"The character "<<vowel[0]<<" is a vowel. "<<endl;

    }else if(vowel[0] == 'U' || vowel[0]=='u'){

        cout<<"The character "<<vowel[0]<<" is a vowel. "<<endl;

    }else{

        cout<<"The character is not a vowel. "<<endl;
    }


    return 0;
}