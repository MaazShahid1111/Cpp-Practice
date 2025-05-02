#include <iostream>
#include <string>
using namespace std;
class company
{
public:
    string company_name;
    company() {};
    void display_company()
    {
        cout << "The compny name is : " << company_name << endl;
    }
    void c_name(string n)
    {
        company_name = n;
    }
};
class branch_01 : public company
{
public:
    string branch_address1;
    branch_01() {};
    void set_branch_name(string a1)
    {
        branch_address1 = a1;
    }
    void display_branch_01()
    {
        cout << "The branch adress is : " << branch_address1 << endl;
    }
};
class branch_02 : public company
{
public:
    string branch_address2;
    branch_02() {};
    void set_branch_name(string a2)
    {
        branch_address2 = a2;
    }
    void display_branch_02()
    {
        cout << "The branch adress is : " << branch_address2 << endl;
    }
};
int main()
{
    branch_01 a;
    a.c_name("Maaz Company");
    a.set_branch_name("Malir Karachi");
    a.display_branch_01();
    a.display_company();
    branch_02 b;
    b.c_name("Maaz 02 Company");
    b.set_branch_name("Gulshan Karachi");
    b.display_branch_02();
    b.display_company();
    return 0;
}