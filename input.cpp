#include <iostream>
using namespace std;
int  add(int c, int d){
int sum;
sum = c + d;
return sum;
}

int main(){
int x,y;

cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
int sum = add(x,y);
cout << "Sum is: " << sum;

return 0;
}

