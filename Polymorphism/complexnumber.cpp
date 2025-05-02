#include<iostream>
using namespace std;
class complex{
    public:
    int real, imag;
    complex(){}
    complex (int r, int i) 
    {
        real = r ;
        imag = i ;
    }
    complex operator+(complex c)
    {
        complex res;
        res.real = real + c.real ;
        res.imag = imag + c.imag ;
        return res;
    }
    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main()
 {
    complex c1(2, 5);
    complex c2(3, 1);
    complex c3;
    c3 = c1 + c2 ;
    c3.display();
    return 0;
 }