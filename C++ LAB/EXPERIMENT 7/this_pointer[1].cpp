#include <iostream>
#include <string>
using namespace std;
class Employee{
	public:
		int id;
		string name;
		float salary;
		Employee(int id, string name, int salary){
			this->id = id;
			this->name = name;
			this->salary = salary;
		}
		void display(){
			cout << id << " " << name << " " << salary << endl;
		}
};

int main(){
	Employee e1 = Employee(1206, "Teju", 10000);
	Employee e2 = Employee(1207, "Teju", 20000);
	e1.display();
	e2.display();
	return 0;
	
}
	
