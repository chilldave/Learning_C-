#include <iostream>
#include <fstream>

using namespace std;

int main(){


    fstream origen("adverbialclauses.png", ios:: in | ios::binary);
    fstream destino("/Files/Copy.png", ios::out | ios::binary);

    char byte;
    while(!origen.eof() && !origen.fail())
    {
        origen.read((char *) & byte, sizeof(char));
        if(origen.good())
        {
            destino.write((char *)& byte, sizeof(char));
        }   
    }
    destino.close();
    origen.close();
    return 0;
}