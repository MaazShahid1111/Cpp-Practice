#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    int roll_no;
    string name;

public:
    void input_data(int r, string n)
    {
        roll_no = r;
        name = n;
    }
    void show_data()
    {
        cout << "The roll number is : " << roll_no << " and name is " << name << endl;
    }
};
class Exam : public Student
{
protected:
    float maths;
    float english;

public:
    void set_marks(float, float);
    void show_marks();
};
void Exam ::set_marks(float m, float e)
{
    maths = m;
    english = e;
}
void Exam ::show_marks()
{
    cout << "The number of Maths are : " << maths << " and english are : " << english << endl;
}
class Result : public Exam
{
protected:
    float percentage;

public:
    void cal_per();
    void show_per();
};
void Result ::cal_per()
{
    percentage = (maths + english) / 2;
}
void Result ::show_per()
{
    cal_per();
    cout << "Percentage is : " << percentage << endl;
}
int main()
{
    Result user01;
    user01.input_data(220, "Maaz");
    user01.set_marks(90, 85);
    user01.show_data();
    user01.show_marks();
    user01.show_per();
    return 0;
}
