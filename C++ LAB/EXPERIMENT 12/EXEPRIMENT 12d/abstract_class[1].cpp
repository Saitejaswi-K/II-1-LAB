#include<iostream>
using namespace std;

class Baseclass{
        int x = 50;
        public:
        virtual void display() = 0;
};

class Derivedclass:public Baseclass{
        int y = 55;
        public:
        void display(){
                cout<<"Derived class: y = "<<y<<endl;
        }
};

int main(){
        Baseclass *a;
        Derivedclass b;        
        a = &b;
        a-> display();
        return 0;
}

