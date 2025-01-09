// Write a program to implement the polymorphism.

//Theory: Polymorphism is the ability of a single function or method to operate on multiple data types.

#include <iostream>
using namespace std;
class animal
{
public:
    void sound()
    {
        cout << "Animal sound" << endl;
    }
};
class dog : public animal
{
public:
    void sound()
    {
        cout << "Dog sound" << endl;
    }
};
class cat : public animal
{
public:
    void sound()
    {
        cout << "Cat sound" << endl;
    }
};
int main()
{
    animal a;
    a.sound();
    dog d;
    d.sound();
    cat c;
    c.sound();
    return 0;
}
