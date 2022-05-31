#include <iostream>
using namespace std;

void print(int i) {
cout << " Here is int " << i << endl;
}
void samad(double f) {
cout << " Here is float " << f << endl;
}
void print(char const *c) {
cout << " Here is char* " << c << endl;
}

int main() {
print(10);
samad(10.10);
print("ten");
return 0;
}
