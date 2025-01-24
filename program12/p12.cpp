// AIM - Write a program to implement operator overloading.
// Operator overloading is a feature in C++ where a single operator can be used to perform different operations. It allows us to change the way operators work for user-defined types.

#include <iostream>
using namespace std;
class Complex{
  private:
  int real, imag;
  public:
  Complex(int r=0, int i=0){
    real = r;
    imag = i;
  }
  Complex operator + (Complex const &obj){
    Complex res;
    res.real = real + obj.real;
    res.imag = imag + obj.imag;
    return res;
  }
  void display(){
    cout<<real<<" + i"<<imag<<endl;
  }
};
int main(){
  Complex c1(3, 4), c2(5, 6);
  Complex c3 = c1 + c2;
  cout<<"Sum of C1 and C2 is: ";
  c3.display();
  return 0;
}