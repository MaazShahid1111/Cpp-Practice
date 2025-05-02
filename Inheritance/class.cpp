#include <iostream>
#include<fstream>
#include <vector>
using namespace std;
class employee{
    private:
    int id;
    string name;
    int age;
    public:
    employee(){}    //default constructor
    void set_name( string name){// to input name
        this->name=name;
    }
    void set_age(int age){  //to input age
            this->age=age;
    }
    void set_id(int id){    //to input id
            this->id=id;
    }
    int get_id(){
        return id;
    }
    string get_name(){  //Since, all attributes are private we need to get them out via function
        return name;
    }
    int get_age(){
        return age;
    }
    void display(){
        cout<<"Name: "<<name<<"\tID: "<<id<<"\tAge: "<<age;
    }
    void make_file(ofstream &test /* this needs to be same words */){
         /* this needs to be same words
 */ test <<"Name: "<<name<<" Age: "<<age<<" ID: "<<id<<endl;
    }
};
int main(){
    int number_of_employees;
    cout<<"Enter the number of employees : ";
    cin>>number_of_employees;
    vector<employee> employee(number_of_employees);
    for (int j=0 ; j<number_of_employees ; ++j){
    cout<<"Enter name of Employee "<<j+1<<" : "<<endl;
    string n;
    cin>>n;
    employee[j].set_name(n);
    cout<<"Enter the age of employee "<<j+1<<" : "<<endl;
    int a;
    cin>>a;
    employee[j].set_age(a);
    cout<<"Enter the ID of employee "<<j+1<<" : "<<endl;
    int i;
    cin>>i;
    employee[j].set_id(i);
    }
    cout<<"\nAll detaills of the employee are : \n";
    for (int i=0 ; i<number_of_employees ; i++){
        employee[i].display();
        cout<<"\n";
    }
    ofstream text /* this needs to be same word */ ("My_file.txt", ios::app);
    if (text/* this needs to be same words */.is_open()){
        // file<<"These are the details of student :\n";         //only use one time
        for (int i = 0 ; i<number_of_employees ; i++ ){
            employee[i].make_file(text);
        }
        text/* this needs to be same words */.close();
        cout<<"\nFile saved successfully!";
    }
    else cout<<"File not found";
}