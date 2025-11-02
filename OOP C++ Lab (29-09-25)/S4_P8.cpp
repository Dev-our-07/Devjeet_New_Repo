/*Call by Pointer (Member Function) 
Define a class Account (balance). Add a member function transfer(Account *acc, 
int amount) that transfers money from the calling object to the account pointed 
by acc. */
#include <iostream>
using namespace std;

class Account{
    int balance;
    public:
    Account()
    {
        balance=0;
    }

    Account(int b)
    {
        balance= b;
    }

    void transfer(Account *acc, int amount)
    {
        if(amount <= balance)
        {
            balance -= amount;
            acc->balance += amount;
            cout<<"Transfer successful!"<<endl;
        }
        else
        {
            cout<<"Insufficient balance!"<<endl;
        }
    }
};

int main()
{
    Account a1(1000), a2(500);
    int amount;
    cout<<"Enter amount to transfer from Account 1 to Account 2: ";
    cin>>amount;
    a1.transfer(&a2, amount);
    return 0;
}