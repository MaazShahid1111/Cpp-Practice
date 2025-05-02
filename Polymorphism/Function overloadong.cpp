/*Function overloading:
Same names ka function hoa but ap iske parameters change kardo ya pir return type
change kardo to ose function overloading kehte hain.
*/
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
float add(float a, float b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout << "Two parameters adding of 5 6 = " << add(5, 6) << endl;
    cout << "Three parameters adding of 5 6 7 = " << add(5, 6, 7) << endl;
    cout << "Two parameters adding of float 5.5 6.5 = " << add(5.5f, 6.5f) << endl; //==> We use f beacuse by 
    return 0;                                                                   //default the 5.5 is taken as double
}