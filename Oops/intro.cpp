#include <iostream>
// include "Hero.cpp" //doubt
using namespace std;

class Hero
{

private:
    char level;

public:
    int health;
    static int timeToComplete;

    Hero()
    {
        cout << "constructor called " << endl;
    }

    // parameterized Constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor (which is perform deep copy)
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << level << endl;
    }

    // getter
    int getlevel()
    {
        return level;
    }

    // setter
    void setlevel(int l)
    {
        level = l;
    }
};

int Hero ::timeToComplete = 5;

int main()
{
    cout << Hero::timeToComplete << endl;

    //     // create of Object
    //     // statically
    //     Hero Raj;
    //     Raj.health = 70;
    //     // Raj.level = 2; // it is accesable when class is public
    //     Raj.setlevel(45); // using setter for declare value for private object
    //     cout << "size : " << sizeof(Raj) << endl;
    //     cout << "Health is : " << Raj.health << endl;
    //     cout << "Level is : " << Raj.getlevel() << endl;

    //     // dynamically
    //     Hero *R = new Hero;
    //     R->health = 50;
    //     cout << "Health is : " << (*R).health << endl;
    //     cout << "Health is : " << R->health << endl;
    //     delete R;
    return 0;
}