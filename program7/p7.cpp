// AIM _ write a program to demonstarte pass by value.

// Pass by value is a method of passing arguments to a function. In this method, the actual value of the argument is passed to the function. The changes made to the parameter inside the function have no effect on the actual argument. The pass by value method is used when we do not want to modify the actual argument inside the function.

#include <iostream>
using namespace std;

void modify(int x) {
  x = 20;
  cout<<" Inside function , X = "<<x<<endl;
}
int main() {
  int x = 10;
  cout<<"Before function call, num = "<<x<<endl;
  modify(x);
  cout<<"After function call, num = "<<x<<endl;
  return 0;
}
