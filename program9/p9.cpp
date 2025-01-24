// Write a Progarm to demonstrate constructor and destructor.

// A destructor is special member function of a class that is executed whenever an object of it's class goes out of scope or whenever the delete expression is applied to a pointer to the object of that class.
// A constructor is a special member function of a class that is executed whenever an object of it's class is created. It has the same name as the class itself. It is used to initialize the objects of it's class.


#include <iostream>
using namespace std;

class Demo{
  public:
    Demo() {
      cout << "Constructor is called" << endl;
    }
    ~Demo() {
      cout << "Destructor is called" << endl;
    }
};

int main(){
  cout<<" Entering main Function"<<endl;

  Demo obj;
  cout<<" Exiting main Function"<<endl;
  return 0;
}