#include <iostream>
using namespace std;

int main(){
double cgpa = 4.00;
bool success = false;
string result = cgpa == 4.00 ? "Done! you have got A+ ":"try again to be better";
cout << result << endl;
if(success) cout << "You have done!";
else if(!success) cout << "Oh! no you are fail";
return 0;
}
