/*Q2: Create a banking system using multilevel inheritance.
Write a C++ program where:

Class Account has a balance attribute and functions to deposit and withdraw money.
Class SavingsAccount (derived from Account) has an interest_rate and a function to apply interest.
Class PremiumAccount (derived from SavingsAccount) offers a bonus if balance is above a threshold.
Implement proper function calls and display the final balance after all operations.*/
#include <iostream>
using namespace std;
class account
{
public:
    double money = 0;     // it is the original balance of the user
    account(double money) // To get money input
    {
        this->money = money;
    };
    void deposit(double new_deposit) // To deposit more money
    {
        money += new_deposit;
    }
    void withdraw(double withdraw_amount) // To withdraw money
    {
        money -= withdraw_amount;
    }
    // double display()                             // To display the amount
    // {
    //     return money;
    // }
};
class saving_account : public account
{
public:
    saving_account(double sal) : account(sal) {} // To give salary form main to premium
    float interest_rate = 1.5;                   // account and then savong account then account
    void apply_interest()
    { // 1.5% is interest
        money *= interest_rate;
    }
};
class premium_account : public saving_account
{
public:
    premium_account(double sal) : saving_account(sal) {}
    double final_balance = money;
    void add_bonus()
    {
        if (money >= 150000)
        {
            int bonus = money * 0.05; // To give 5% bonus
            final_balance = money + bonus;
        }
    }
    void display()
    {
        cout << "The final balance is : " << final_balance << endl;
    }
};
int main()
{
    premium_account user1(100000);
    user1.deposit(500000);
    user1.add_bonus();
    user1.withdraw(100000);
    user1.apply_interest();
    user1.display();
    return 0;
}
