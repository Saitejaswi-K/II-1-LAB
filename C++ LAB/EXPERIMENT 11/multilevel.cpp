#include<iostream>
using namespace std;

class Gp{
	public:
	int a;
	Gp(){
		a = 10;
	}
	void display1(){
		cout<<"a = "<<a<<endl;
	}
};

class p:public Gp{
	public:
	int b;
	p(){
		b = 20;
	}
	void display2(){
		cout<<"b = "<<b<<endl;
	}
};

class child:public p{
	public:
	int c;
	child(){
		c = 30;
	}
	void display3(){
		cout<<"c = "<<c<<endl;
	}
};

int main(){
	child obj;
	obj.display1();
	obj.display2();
	obj.display3();
	return 0;
}
