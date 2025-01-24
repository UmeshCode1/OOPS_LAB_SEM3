// Write a to demonstrate pass by reference.

// when a variable is passed by reference, a reference to the actual argument is passed to the function. The changes made to the parameter inside the function have an effect on the actual argument. The pass by reference method is used when we want to modify the actual argument inside the function.

#include <iostream>
using namespace std;

void modify(int &x) {
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
