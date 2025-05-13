#include<iostream>
using namespace std;
class Fruits {
    private:
        int ID;
        string name;
    public:
    static int count;
        void setdata () {
            cout<<"Enter the name : ";
            cin>>name;
            count++;
        }
        void setid() {
            cout<<"\nEnter iD : ";
            cin>>ID;
        }
        void showdata() {
            cout<<"The name of he fruit is : "<<name<<" and ID is : "<<ID<<endl;
        }
};
int Fruits :: count;
int main() {
    Fruits mango, apple, banana;
    mango.setdata();
    mango.setid();

    banana.setdata();
    banana.setid();


    apple.setdata();
    apple.setid();

    //To find out how many fruits have been created we need a count variable but if we use simple count it will be unique for all objects
    //We use static variable so that it is a class variable and it remains same for class 
    cout<<"The number of objects is : "<<count<<endl;
    return 0;
}