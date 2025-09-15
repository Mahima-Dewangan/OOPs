#include<bits/stdc++.h>
using namespace std;

// ENCAPSULATION : It is wrapping up of data and member functions into a single unit called class.

class Account
{
    private:
    string balance;
    string password;

    public:
    string accountId ;
    string username;
   

};

int main()
{
    Account a;
    // a.balance ;  // this gives error because balance is the private member and cannot be accessed 
                    // *directly* outside the class. i.e : data hiding done using the encapsulation.

}