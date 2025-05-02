/*Q: Write a C++ program demonstrating single-level inheritance. Create a base class Animal with a method sound() 
that prints "Animals make sounds", and a derived class Dog that overrides sound() to print "Dogs bark".*/

/*Simple program of single level inheritance*/
#include<iostream>
using namespace std;
class animal
{
    public:     //Visibility Mode
    animal(){};     // Constructor
    void sound()        //Method
    {
        cout<<"Animals make sound!";
    }
    ~animal(){};        //Destructor
};
class dog : public animal
{
    public:
    dog(){};        //Constructor
    void sound(){       //Method
        cout<<"Dog Barks!";
    }
    ~dog(){};       //Destructor
};
int main()
{
    animal a;
    a.sound();
    cout<<"\nAfter Changing, "<<endl;
    dog d;
    d.sound();
    return 0;
}







