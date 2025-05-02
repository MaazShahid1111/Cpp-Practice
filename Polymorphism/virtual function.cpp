/*One use of virtual function is that if we have a function of same name and data type
a function that is pre-defined in base class and we want to change the definition of that function in derived class
then we can use virtual function.*/
#include <iostream>
using namespace std;
class Total_marks
{
public:
    float maths, english, science;
    Total_marks(float en, float ma, float sc)
    {
        maths = ma;
        english = en;
        science = sc;
    }
    float percentage;
    float total_marks;
    float calculate_total(float mat, float eng, float sci)
    {
        float tres;
        tres = (mat + eng + sci);
    }
    float calculate_percentage(float mat, float eng, float sci)
    {
        float pres;
        pres = ((mat + eng + sci) / 3) * 100;
    }
    virtual void display()
    {
        cout<<"The total is : "<<tres;
        cout<<"The percentage is : "<<pres;
    }
};
class English : public Total_marks
{
public:
    void display()
    {
        cout << "The marks in english are : " << english << endl;
    }
};
class Maths : public Total_marks
{
public:
    float maths;
    Maths(float math, float engl, float scie) : Total_marks(math, engl, scie)
    {
        maths = math;
    }
    void display()
    {
        cout << "The marks in Maths are : " << maths << endl;
    }
};
int main()
{
    Maths s1(88, 99, 98);
    s1.display();
    return 0;
}