#include <iostream>
#include <string.h>
using namespace std;

// created a class

class car
{

public:
    string name;
    int price;
    string brand;
    string model;

private:
    string onerName = "Abdul Mozid fahim";
};

int main()
{

    car toyota;

    toyota.name = "Toyota YX38";
    toyota.price = 1200;
    toyota.model = "YX38";
    toyota.brand = "Toyota";

    cout << toyota.name << endl;
    cout << toyota.price << "$" << endl;
    cout << toyota.model << endl;
    cout << toyota.brand << endl;

    return 0;
}
