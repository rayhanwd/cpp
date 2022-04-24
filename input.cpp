#include <iostream>
using namespace std;
int main(){
int x,y,add();

cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
int sum = add(x,y);
cout << "Sum is: " << sum;

return 0;
}

int  add(int x, y){
int sum;
sum = x + y;
return sum;
}
