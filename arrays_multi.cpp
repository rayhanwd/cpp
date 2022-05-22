#include <iostream>
#include <string>
using namespace std;

int main(){

string letters[2][4];

for(int i = 0; i < 2; i++) {
  for(int j = 0; j < 4; j++) {
    cin >> letters[i][j];
  }
}

    cout << "output:" << endl;

for(int i = 0; i < 2; i++) {
  for(int j = 0; j < 4; j++) {
    cout << letters[i][j] << endl;
  }
}
string letters3[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

for(int g = 0; g < 2; g++) {
  for(int f = 0; f < 2; f++) {
    for(int x = 0; x < 2; x++) {
      cout << letters3[g][f][x] << "\n";
    }
  }
}
return 0;
}
