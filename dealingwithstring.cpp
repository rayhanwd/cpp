#include <iostream>
#include <string>
using namespace std;

int main(){

    string fName = "Kazi";
    bool check = false;
    string lname = "Rayhan";

    string fullName = fName+ " " +lname;

    string fullNamebyAppend= fName.append(lname);
    string myString = "Hello";

    cout <<  lname[0] << endl;
    cout << "Your full name is " << fullName << endl;

    cout << "Your full name is append " << fullNamebyAppend << endl;
    cout << "Are you check your fullName length" << endl;
    cout << "The length of the fullNamebyAppend string is: " << fullNamebyAppend.size() << endl;
    cout << fullName << endl;
    cin >> check;
    if(check) cout << "Your fullName length " << fullName.length() << endl;
    return 0;
}

