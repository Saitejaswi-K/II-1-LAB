#include<iostream>
using namespace std;

class Baseclass{
        int x = 55;
        public:
        virtual void display(){
                cout<<x<<endl;
        }
};

class Derivedclass:public Baseclass{
        int y = 56;
        public:
        void display(){
                cout<<y<<endl;
        }
};

int main(){
        Baseclass *a;
        Derivedclass b;        
        a = &b;
        a-> display();
        return 0;
}

