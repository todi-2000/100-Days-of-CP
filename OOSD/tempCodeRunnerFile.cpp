#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating";
    }
};

class Dog : public Animal
{
public:
    void eat()
    {
        cout << "Eating Bread..";
    }
};

int main()
{
    
    Dog d = Dog();
    d.eat();
    return 0;
}