#include <iostream>
using namespace std;
class Box{
	int length;
	public:
		Box(){
			length = 0;}
	private:
		friend int printlength(Box);
};
int printlength(Box b){
	b.length += 10;
	return b.length;
}

int main(){
	Box b1;
	cout << "Length of box:" << printlength(b1)<<endl;
	return 0;
}

