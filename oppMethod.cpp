#include <iostream>
using namespace std;

// created a class

class greet
{

public:
  void greeting()
  {
    cout << "Hi! , how are you?" << endl;
  }
};

int main()
{

  greet one;
  one.greeting();
  return 0;
}
