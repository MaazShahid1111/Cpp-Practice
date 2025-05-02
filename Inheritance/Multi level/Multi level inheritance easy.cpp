/*Q1: Implement a simple multilevel inheritance program.
Write a C++ program where:

Class Person has a name attribute and a function to display it.
Class Student (derived from Person) has a roll_no attribute and a function to display it.
Class Graduate (derived from Student) has a degree attribute and a function to display it.
In main(), create a Graduate object and display all details.*/
#include <iostream>
using namespace std;
class Person // Grandfather Class or Base Class or Level 0 Inheritance
{
public:
    string name;
    Person(string n)
    {
        name = n;
    }
    Person() {};
    void display_name()
    {
        cout << "The name is : " << name << endl;
    }
};
class Student : public Person
{ // Father CLass or Derived class or Level 1 Inheritance
public:
    int roll_no;
    Student(int r, string n) : Person(n)
    {
        roll_no = r;
    }
    void display_roll_no()
    {
        cout << "The roll number is : " << roll_no << endl;
    }
};
class Graduate : public Student
{ // Child Class or Derived Class of Father CLass or level 2 inheritance
public:
    string degree;
    Graduate(string degree, string name, int roll_no) : Student(roll_no, "Maaz")
    {
        this->degree = degree;
    }
    void display_degree()
    {
        cout << "The degree is : " << degree << endl;
    }
};
int main()
{
    Graduate g("CSIT", "Maaz", 220);
    // g.name="Maaz";
    // g.roll_no=220;
    // g.degree="CSIT";
    g.display_name();
    g.display_roll_no();
    g.display_degree();
    return 0;
}
/*  Note:
        Data pehle last child class me aega sara phir wahan father and Grndfather ka data dono father me jaega
        phir father se grandfather ke pas jaega.

*/
