#include <iostream>
using namespace std;

// create a class
class halloween{
private:
    int age;
    string name;
public:
        halloween(){
        age=12;
        name="Midul Islam Rusel";
    };
        halloween(int Age,string Name){
        age=Age;
        name=Name;
    };

    int gift(int x){
        return 1;
    };

    string gift(int x,int y){
        return "string";
    };

    halloween gift(int x,int y,int z){
        halloween h1;
        return h1;
    };

    void display(){
    cout << " Name: " << name << endl << " Age: "<< age <<endl;
    };
    friend void compare(halloween);
};

    void compare(halloween o1){

    if(o1.age > 12){
        cout << " Parameter constructor is called " << endl;
    }
    else{
        cout << " Default constructor is called " << endl;
    }
    };

int main(){

    halloween obj;
    obj.display();
    obj.gift(2);
    compare(obj);
    halloween obj2(22,"Kazi Rayhan");
    compare(obj2);

    return 0;
};
