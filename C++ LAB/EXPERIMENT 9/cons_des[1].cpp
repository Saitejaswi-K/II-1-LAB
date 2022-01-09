#include<iostream>
using namespace std;
class test {
	public:
	int y = 5, z = 7;
	test(){
		cout << "y = 5" << endl;
		cout << "z = 7" << endl;
	}
	~test(){}
};
int main(){
	test a;
	cout <<"The sum is: "<< a.y + a.z << endl;
	return 0;
}
