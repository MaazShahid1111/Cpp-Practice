/*Q: Create a single-level inheritance program where:

* The base class Employee has name and salary as protected members.
* The derived class Manager inherits Employee and adds bonus.
* Implement a parameterized constructor in Manager that initializes all three values 
  and a method displayDetails() that prints name, salary, and bonus.
* Create an object of Manager in main() and display its details.*/
#include <iostream>
#include<string>
using namespace std;
class Employee       // Main Class
{
    protected:
    string name;
    int salary;
    public:
    Employee(){};     // Default constructor
    Employee(string n, int sal)
    {
        name = n ;
        salary = sal ;
    };
};
class Manager : public Employee         // Derived Class
{
    public:
    float bonus;
    Manager(){};       // Default constructor
    Manager(string name, int salary, float bonus) : Employee(name,salary)          //Inherited Constructor
    {
        this->bonus = bonus ;
    }
    void displayDetails()
    {
        cout<<"The name is : "<<name<<" salary is : "<<salary<<" Bonus is : "<<bonus<<endl;
    }
};
int main()
{
    //Manager m(5.5);
    Manager m("Maaz", 12345, 5.5);
    m.displayDetails();
    return 0;
}