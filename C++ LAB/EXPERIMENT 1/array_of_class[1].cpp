#include <iostream>
using namespace std;
class Student_Info{
    int roll_number, grade;
    char student_name[50];
    public:
        void read(int count){
            cout<<" Enter student "<<count+1<<" information "<<endl;
            cout<<"Name of the Student: ";
            cin>>student_name;
            cout<<"Roll Number: ";
            cin>>roll_number;
            cout<<"Grade:";
            cin>>grade;
            cout<<endl;
        }
        void display(int count){
            cout<<" Student "<<count+1<<endl;
            cout<<"\nName of the Student: "<<student_name;
            cout<<"\nRoll Number: "<<roll_number;
            cout<<"\nGrade Secured: "<<grade;
        }
};
int main(){
    Student_Info s[3];
    int i;
    for(i=0; i<3; i++)
        s[i].read(i);
    for(i=0; i<3; i++)
        s[i].display(i);
    return 0;
}
