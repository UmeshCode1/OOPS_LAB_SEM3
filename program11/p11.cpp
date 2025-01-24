// AIM- Write a program to implement functon overloading.
// Function overloading is a feature that allows us to have more than one function with the same name in the same scope. The function is redefined by using either different types of arguments or a different number of arguments.

#include <iostream>
using namespace std;
class Calculate{
  public:
  int add(int a, int b){
    return a+b;
  }
  int add(int a, int b, int c){
    return a+b+c;
  }
  double add(double a, double b){
    return a+b;
  }
};
int main(){
  Calculate obj;
  cout<<"Sum of 2 and 3 is: "<<obj.add(2,3)<<endl;
  cout<<"Sum of 2, 3 and 4 is: "<<obj.add(2,3,4)<<endl;
  cout<<"Sum of 2.5 and 3.5 is: "<<obj.add(2.5,3.5)<<endl;
  return 0;
}