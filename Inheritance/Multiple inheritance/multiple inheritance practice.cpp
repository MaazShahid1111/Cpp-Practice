/*Write a program in C++ using multiple inheritance where:

Class Person has attributes name and age, and a function display_person().
Class Employee has salary and a function display_employee().
Class Manager inherits from both Person and Employee and has a function display_manager() to display all details.*/
#include <iostream>
using namespace std;
class Person
{
public:
    Person() {}
    string name;
    int age;
    void set_name(string n)
    {
        name = n;
    }
    void set_age(int a)
    {
        age = a;
    }
    void display_person()
    {
        cout << "The name is : " << name << " age is : " << age << endl;
    }
};
class Employee
{
public:
    double salary;
    void set_salary(double s)
    {
        salary = s;
    }
    void display_salary()
    {
        cout << "The salary is : " << salary << endl;
    }
};
class Manager : public Person, public Employee
{
public:
    void display_manager()
    {
        display_person();
        display_salary();
    }
};
int main()
{
    Manager m1, m2;
    cout << "Enter name for manager 1 : " << endl;
    string nam;
    cin >> nam;
    m1.set_name(nam);
    cout << "Enter age for manager 1 : " << endl;
    int ag;
    cin >> ag;
    m1.set_age(ag);
    cout << "Enter salary for manager 1 : " << endl;
    double salar;
    cin >> salar;
    m1.set_salary(salar);
    cout << "Enter name for manager 2 : " << endl;
    cin >> nam;
    m2.set_name(nam);
    cout << "Enter age for manager 2 : " << endl;
    cin >> ag;
    m2.set_age(ag);
    cout << "Enter salary for manager 2 : " << endl;
    cin >> salar;
    m2.set_salary(salar);
    m1.display_manager();
    m2.display_manager();
    return 0;
}