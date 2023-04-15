#include <iostream>
using namespace std;
//Program that raises the # to another one exponent
int raiseToPower(int base, int exponent);

int main() {

 int sixExpFive = raiseToPower(2,3);
 cout << "6^5 is " << sixExpFive << endl;

 return 0;
}

int raiseToPower(int base, int exponent){
 int result = 1;
 for (int i = 0; i < exponent; i = i + 1){
   result = result * base;
   }
 return result;
}