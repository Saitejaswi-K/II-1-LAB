#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    char name[50], dept[50];
    fstream file("details.txt", ios::out);
    cout<<"Enter name: "<<"\n";
    cin >> name;
    file<<name<<"\n";
    file.close();
    file.open("details.txt", ios::app);
    cout << "Enter department:"<<"\n";
    cin >> dept;
    file<< dept <<"\n";
    file.close();

    return 0;
}
