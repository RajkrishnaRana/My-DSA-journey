#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

    void func()
    {
        cout << "ABC" << endl;
    }

    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Animal
{
public:
    int age;
    int weight;

    void bark()
    {
        cout << "Barking " << endl;
    }

    void func()
    {
        cout << "AB" << endl;
    }
};

class Male : public Human // single inheritence
{
public:
    string color;

    void sleep()
    {
        cout << "Time to sleeping " << endl;
    }
};

class Hybrid : public Human, public Animal // multilevel inheritence
{
public:
    string color;

    void sleep()
    {
        cout << "Time to sleeping " << endl;
    }
};

int main()
{
    // Male object1;
    // cout << object1.height << endl;
    // cout << object1.color << endl;
    // object1.sleep();

    // Hybrid h1;
    // cout << h1.height << endl;
    // h1.bark();

    Hybrid m;
    // m.func();
    m.Human ::func();
    m.Animal ::func();

    return 0;
}