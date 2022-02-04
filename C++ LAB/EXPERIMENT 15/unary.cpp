#include <iostream>
using namespace std;
class Test{
  private:
   int n;
  public:
   Test(): n(5){}
   void operator ++(){
     n = n+2;
   }
   void Print(){
     cout<<"Count is: "<<n;
   }
};
int main()
{
  Test t;
  ++t;
  t.Print();
  return 0;
}
