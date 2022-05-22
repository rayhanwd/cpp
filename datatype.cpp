#include <iostream>
#include <string>
using namespace std;
int main(){
int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = false;       // Boolean
string myText = "Hello";     // String
if(!myBoolean){
    cout << "That's oky" << endl;
}
cout << myBoolean;
float myNum2 = 5.75;
cout << myNum2 << endl;
double myNum3 = 19.99 ;
cout << myNum3 <<endl;
float f1 = 35e3;
double d1 = 12E4;
cout << f1 << endl;
cout << d1 << endl;
bool isCodingFun = true;
bool isFishTasty = false;
cout << isCodingFun << endl;  // Outputs 1 (true)
cout << isFishTasty << endl;  // Outputs 0 (false)
char a = 65, b = 66, c = 67;
cout << a << endl;
cout << b << endl;
cout << c << endl;
return 0;
}
