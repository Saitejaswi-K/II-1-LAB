#include <iostream>
using namespace std;
class employee
{
	int   emp_number;
	char  emp_name[20];
	float emp_basic, emp_da, emp_it, emp_net_sal;
	public:
		void get_emp_details();
		float find_net_salary(float basic, float da, float it);
		void show_emp_details();
};
void employee :: get_emp_details() {
	cout<<"Enter employee number: ";
	cin>>emp_number;
	cout<<"Enter employee name: ";
	cin>>emp_name;
	cout<<"Enter employee basic: ";
	cin>>emp_basic;
	cout<<"Enter employee DA: ";
	cin>>emp_da;
	cout<<"Enter employee IT: ";
	cin>>emp_it;
}
float employee :: find_net_salary(float basic, float da, float it) {
    return (basic+da)-it;
}
void employee :: show_emp_details() {
	cout<<" Details of  Employee "<<endl;
	cout<<"Employee Name      :  "<<emp_name<<endl;
	cout<<"Employee number    :  "<<emp_number<<endl;
	cout<<"Basic salary       :  "<<emp_basic<<endl;
	cout<<"Employee DA        :  "<<emp_da<<endl;
	cout<<"Income Tax         :  "<<emp_it<<endl;
	cout<<"Net Salary         :  "<<find_net_salary(emp_basic, emp_da, emp_it)<<endl;
}
int main() {
    employee emp;
    emp.get_emp_details();
    emp.show_emp_details();
    return 0;
}
