// AIM - Write a program to implement Encapsulation in C++.

// Encapsulation is the process of combining data and functions into a single unit called class. Encapsulation is used to hide the values or state of a structured data object inside a class, preventing.


#include <iostream>
#include <string>
using namespace std;
class Student {
  private :
    string name;
    int age ;
  public :
    void setName(string name) {
      this -> name = name;
    } 
 
    void setAge(int age) {
      this -> age = age;
    }

    string getName() {
      return name;
    }

    int getAge() {
      return age;
    }

};

int main() {
  Student s1;
  s1.setName("John");
  s1.setAge(20);
  cout << "Name: " << s1.getName() << endl;
  cout << "Age: " << s1.getAge() << endl;
  return 0;
}

