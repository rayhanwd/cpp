#include <iostream>
using namespace std;
// create class
class bus{
public:
    int price,speed;
    bus(int p,int s){
      price = p;
      speed = s;
    };
};

class truck{
public:
    int price,speed;
    truck(int p,int s){
        price = p;
        speed = s;
    };
};
void compare(bus obj1, truck obj2)  {
  if(obj1.speed > obj2.speed){
    cout << "The bus speed is high and price : " << obj1.price;
  }
  else{
     cout << "The truck speed is high and price : " << obj2.price;
  }
};
int main(){
     bus objx(25678765,2800);
     truck objy(23454323,2790);
      compare(objx,objy);
    return  0;

};
