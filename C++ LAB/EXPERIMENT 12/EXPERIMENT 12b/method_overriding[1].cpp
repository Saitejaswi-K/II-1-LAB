#include <iostream>
using namespace std;
class base{
	public:
		void print(){
			cout << "Base Function" << endl;
		}
};

class derived: public base{
	public:
		void print(){
			cout << "Derived Function" << endl;
		}
};

int main(){
	derived Derived1;
	Derived1.print();
	return 0;
}
