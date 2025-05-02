// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     A() {}
// };
// class B : public A
// {
// public:
//     B() { cout << "This is class B"; }
//     void display_B()
//     {
//         cout << "This is class B";
//     }
// };
// class C : public A
// {
// public:
//     C() {}
//     void display_C()
//     {
//         cout << "This is class C";
//     }
// };
// class D : public B, public C
// {
// public:
//     D() {}
//     void display_D()
//     {
//         cout << "This is class D";
//     }
// };
// int main()
// {
//     D obj;
//     obj.display_A();
//     return 0;
// }
/*The compiler is confused because class D is inherited by multiple inheriatnce of both C and B they 
are both inheriting class A together by heirarchical inheritance therefore compiler gets confused on
what function to execute since we want it to make 2 copies of same function A which is in acceptable!*/
/*
                                    Class A
                                  /         \
                                 /           \               Class B and C inherit A as multiple inheritance
                              Class B      Class C           Class D inherits B and C as heirarchical inheritance 
                                \             /
                                 \           /
                                  \         /
                                    Class D
*/
#include <iostream>
using namespace std;
class A
{
public:
    A() {}
    void display_A(){
        cout<<"This is class A"<<endl;
    }
};
class B : virtual public A
{
public:
    B() {}
    void display_B()
    {
        cout << "This is class B"<<endl;
    }
};
class C : virtual public A
{
public:
    C() {}
    void display_C()
    {
        cout << "This is class C"<<endl;
    }
};
class D : public B, public C
{
public:
    D() {}
    void display_D()
    {
        cout << "This is class D"<<endl;
    }
};
int main()
{
    D obj;
    obj.display_A();
    obj.display_B();
    obj.display_C();
    obj.display_D();
    return 0;
}
/*Therefore, we use virtual keyword to tell the compiler that both B and C are calling the same function
  A so no need to make multiple copies of A just execute A once then use it inside the other in same manner.*/