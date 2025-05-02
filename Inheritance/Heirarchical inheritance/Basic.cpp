#include <iostream>
using namespace std;
class Vehicle
{
public:
    Vehicle() {}
    string name;
    void set_company_name(string c_name);
    void display_company_name()
    {
        cout << "The company name is : " << name << endl;
    }
};
void Vehicle ::set_company_name(string c_name)
{
    name = c_name;
}
class Car : public Vehicle
{
public:
    Car() {}
    string Car_name;
    int Car_plate;
    string Car_model;
    void set_Car_data(string n, int c_p, string c_m);
    void dislay_Car_data()
    {
        cout << "The car name is " << Car_name << " Car number plate is " << Car_plate << " Car_model is " << Car_model << endl;
    }
};
void Car ::set_Car_data(string n, int c_p, string c_m)
{
    Car_name = n;
    Car_plate = c_p;
    Car_model = c_m;
}
class Truck : public Vehicle
{
public:
    Truck() {}
    string truck_name;
    int truck_number;
    void set_truck_data(string t_n, int t_num)
    {
        truck_name = t_n;
        truck_number = t_num;
    }
    void display_truck()
    {
        cout << "The truck name is " << truck_name << " and number plate is " << truck_number << endl;
    }
};
int main()
{
    Truck n1;
    cout << "What is your company ? ";
    string n;
    cin >> n;
    n1.set_company_name(n);
    n1.display_company_name();
    n1.set_truck_data("Maaz ka truck", 57779);
    Car c1;
    c1.set_company_name(n);
    c1.set_Car_data("Ferrari", 12345, "Ferrari la` Ferrari");
    c1.dislay_Car_data();
    n1.display_truck();
    return 0;
}