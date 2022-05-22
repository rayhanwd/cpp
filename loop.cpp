#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i < 9)
    {
        cout << "I am new here..." << endl;
        i++;
    }

    for (int j = 0; j < 7; j++)
    {
        cout << "I am a for loop..." << endl;
    }

    int k = 0;
    do
    {
        cout << "I do loop new here..." << endl;
        k++;
    } while (k < 99);

    // break and continue loop

    // control loop

    for (int m = 0; m < 7; m++)
    {
        if (m == 3)
            continue;
        cout << "i am " << m << endl;
    }

    return 0;
}
