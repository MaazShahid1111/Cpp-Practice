#include<iostream>
using namespace std;
class test
    {
        public:
        int number;
        test(int n)
            { 
                number = n;
            }
        void operator ++ ()     // for prefix add operator 
        {
            ++number;
        }
        void operator ++ ( int )     // for postfix add operator 
        {
            number++;
        }
        void operator -- ()     // for prefix substract operator 
        {
            number--;
        }
        void operator -- (int)     // for postfix substract operator 
        {
            --number;
        }
        void display()
        {
            cout<<"The value is "<<number<<endl;
        }
    };
int main ()
{
    test t1(34);
    t1.display();
    t1++;
    t1.display();
    ++t1;
    t1.display();
    t1--;
    t1.display();
    --t1;
    t1.display();
    return 0;
}