#include <iostream>
using namespace std;
class Box
{
   private:
        int length;
   public:
         Box (){
             length = 0;
             };
   friend int printLength (Box); //friend function
};
int printLength(Box b1)
{
    b1.length +=10;
    return b1.length;

}
int main ()
{
   Box b;
   cout <<" Length of box: "<< printLength(b)<<endl;
    return 0;
}
