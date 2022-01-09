#include <iostream>
using namespace std;
struct college_info{
    char college_name[15], college_code[10], dept[50];
    int intake;
};
int main() {
    struct college_info college;
    cout<<"Enter the College Information"<<endl;
    cout<<"Name of the college: ";
    cin>>college.college_name;
    cout<<"College Code: ";
    cin>>college.college_code;
    cout<<"Department: ";
    cin>>college.dept;
    cout<<"Department In-take: ";
    cin>>college.intake;
    cout<<"College Information"<<endl;
    cout<<"Name of the college : "<<college.college_name<<endl;
    cout<<"College University Code: "<<college.college_code<<endl;
    cout<<"Name of the Department: "<<college.dept<<endl;
    cout<<"The department of "<<college.dept<<" has in-take : "<<college.intake<<endl;
    return 0;
}
