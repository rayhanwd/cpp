#include <iostream>
#include <string>
using namespace std;

int main(){
string name[] = {"karim","rayhan","sohan","shuvo"};

for(int i=0;i<sizeof(name);i++){
    cout << name[i] << endl;
}
return 0;
}
