#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
    string name;

    Employee(int id, float salary, string name)
    {
        this->id=id;
        this->salary = salary;
        this->name=name;
    }
    void display()
    {
        cout << id << " " << salary << " " << name << "\n";
    }
};

int main()
{
    Employee e1 = Employee(1, 500.00,"Jaan");
    Employee e2 = Employee(2,500.00,"Teddy");
    e1.display();
    e2.display();
}