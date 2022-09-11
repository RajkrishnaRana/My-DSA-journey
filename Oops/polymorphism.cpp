#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Raj" << endl;
    }

    void sayHello(string s)
    {
        cout << "Hello " << endl;
    }
};

class B
{
public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }

    // operator overloading
    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output " << value2 - value1 << endl;
    }
};

class Animal
{
public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking " << endl;
    }
};

int main()
{
    // A a1;
    // a1.sayHello();

    // B obj1, obj2;
    // obj1.a = 7;
    // obj2.a = 11;
    // obj1 + obj2;

    Dog obj;
    obj.speak();

    return 0;
}