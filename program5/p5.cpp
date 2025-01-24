// AIM _ Write a program to implement Access Modifier.

// Access Modifer is used to restrict the access of class members. There are three types of access modifiers in C++: public, private, and protected. By default, all members of a class are private. We can change the access of class members using access modifiers.

#include <iostream>
using namespace std;

class Base{
  private:
  int a;
  protected:
  int b;
  public:
  int c;

  Base():a(1), b(2), c(3) {}
  int get_a() {
    return a;
  }
  int get_b() {
    return b;
  }
  int get_c() {
    return c;
  }
};
class Derived:public Base{
  public:
  void show() {
    cout << "b (via derived Class):" << b << endl;
    cout << "c (via derived class):" << c << endl;
  }
};
int main() {
 Base baseObj;
 Derived derivedObj;
  cout << "a:(Via Public):" << baseObj.get_a() << endl;
  cout << "b(Via Protected):" << baseObj.get_b() << endl;
  cout << "c(Via Public):" << baseObj.get_c() << endl;
  derivedObj.show();
  return 0;
}
