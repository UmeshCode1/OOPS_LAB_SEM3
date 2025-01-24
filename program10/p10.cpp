// Write a Program to demonstrate virtual function.

// A virtual function is a member function in the base class that you expect to redefine in derived classes. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the function.

#include <iostream>
using namespace std;

class Base{
    public:
        virtual void display(){ 
            cout << "Base class Dispaly" << endl;
        }
        void show(){
            cout << "Base class Show" << endl;
        }
};
class Derived : public Base{
    public:
        void display() override{
            cout << "Derived class Display" << endl;
        }
        void show(){
            cout << "Derived class Show" << endl;
        }
};
int main(){
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->display(); // Derived class Display  
    ptr->show(); // Base class Show
    return 0;

}