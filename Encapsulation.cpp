#include<iostream>
#include<string>
using namespace std;

class Account{

    //data hiding by using private access specifier
    private:

    double balance;
    string password;

    public:

    string accountId;
    string username;    

};

int main(){

    Account acc;
    acc.accountId = "ACC001";
    acc.username = "john_doe";

    acc.balance = 10000.0; // Error: 'balance' is a private member of 'Account'

    cout<< acc.balance <<endl;// Error: 'balance' is a private member of 'Account'


    cout<< acc.accountId <<endl;
    cout<< acc.username<<endl;

    return 0;

}