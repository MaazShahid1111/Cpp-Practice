/*Scope resolution operator
    When we declare a variable inside a function it is a 
    local variale and when declared outide the function 
    it is global variable. When we print a it prints 
    the local "a", If we need to print something from
     global function we use Scope resolution operator"::".
*/


#include<iostream>
using namespace std;
int a = 5 ;     // Global Variable
int main(){
    int a = 6 ;     //Local Variable
    cout<<a<<endl;        //To print a Local Variable
    cout<<::a<<endl;        //To print a Global Variable
    return 0;
}
