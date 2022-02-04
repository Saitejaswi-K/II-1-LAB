#include <iostream>
using namespace std;

int add(int x, int y){
	cout << x + y << endl;
	return 0;
}

float add(float x, float y){
	cout << x + y << endl;
	return 0;
}

double add(double x, double y){
	cout << x + y << endl;
	return 0;
}
 
 int main(){
 	add(10, 20);
 	add(23.45f, 34.5f);
 	add(40.24, 20.433);
 }
