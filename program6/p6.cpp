// Aim - Write a program to implement static member of class.

// Static members of a class are shared among all the objects of the class. They are initialized only once. They are declared using the static keyword. Static members are accessed using the class name and the scope resolution operator ::.

#include <iostream>
using namespace std;

class counter{
  private:
    static int count;
  public:
    counter() {
      count++;
    }
    static int getCount() {
      return count;
    }
};
int counter::count = 0;
int main() {
  counter c1, c2, c3;
  cout << "Count: " << counter::getCount() << endl;
  return 0;
}