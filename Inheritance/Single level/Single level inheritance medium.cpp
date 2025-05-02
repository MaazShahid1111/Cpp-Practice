/*Q: Modify the above program to include a parameterized constructor in the base class Animal that takes a
 string name and initializes it. The derived class Dog should call the base class constructor and add a method
   display() to print the dog's name.*/

   /*Medium program of single level inheritance*/
/*Simple program of single level inheritance*/
#include<iostream>
using namespace std;
class animal
{
    public:     //Visibility Mode
    string name;
    animal(){};   //default constructor
    animal(string name)
    {
        this->name=name;
    };     // Constructor
    void sound()        //Method
    {
        cout<<"Animals make sound!";
    }
    ~animal()
    {

    };        //Destructor
};
class dog : public animal
{
    public:
    dog ()
    {
          //default contructor
    }
    dog(string name): animal(name)
    {

    };        //Constructor
    void sound()
    {       //Method
        cout<<"Dog Barks!";
    }
    void display(){
      cout<<"Name is : "<<name<<endl;
    }
    ~dog(){};       //Destructor
};
int main()
{
    animal a;
    a.sound();
    string n;
    cout<<"Enter the dog's name : ";
    cin>>n;
    cout<<"\nAfter Changing, "<<endl;
    dog d(n);
    d.sound();
    d.display();
    return 0;
}
