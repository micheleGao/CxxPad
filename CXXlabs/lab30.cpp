#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Account
{
private:
    long id;
    string owner;
    double balance;

public:
    Account(long id, string owner, double balance)
    {
        this->id = id;
        this->owner = owner;
        this->balance = balance;
    }
    Account(const Account &account)
    {
        id = account.id;
        owner = account.owner;
        balance = account.balance;
    }
    Account(const Account *account)
    {
        this->id = account->id;
        this->owner = account->owner;
        this->balance = account->balance;
    }
    virtual ~Account()
    {
        cout << "empty" << endl;
    }
    // virtual string  getOwner()="";
    virtual string type()=0;
    virtual int monthlyFee() = 0;
    friend ostream &operator<<(ostream &os, const Account *data);
};
ostream &operator<<(ostream &os, const Account *data)
{
    os << data->id << "\n"
       << data->owner << "\n"
       << data->balance;
    return os;
}

class Savings : public Account
{
public:
    Savings(long id, string owner, double balance) : Account(id, owner, balance)
    {
        // this->id = id;
        // this->owner = owner;
        // this->balance = balance;
    }
    Savings(const Savings &savings) : Account((Account &)savings)
    {
        // id = savings.id;
        // owner = savings.owner;
        // balance = savings.balance;
    }
    Savings(const Savings *savings) : Account((Account *)savings)
    {
        // id = savings->id;
        // owner = savings->owner;
        // balance = savings->balance;
    }
    // D) define type() to return "Savings"
    virtual string type()
    {
        return "Savings";
    }
    virtual int monthlyFee()
    {
        return 15;
    }
};

class Checking : public Account
{
public:
    bool canWriteChecks;
    // non-default constructor with four parameters for class Account and canWriteChecks
    Checking(long id, string owner, double balance, bool canWriteChecks) : Account(id, owner, balance)
    {
        this->canWriteChecks = canWriteChecks;
    }
    Checking(const Checking &checking) : Account((Account &)checking)
    {
        canWriteChecks = checking.canWriteChecks;
    }
    Checking(const Checking *checking) : Account((Account *)checking)
    {
        canWriteChecks = checking->canWriteChecks;
    }
    // E) define type() to return "Checking"
    string type()
    {
        return "Checking";
    }
    int monthlyFee()
    {
        return 10;
    }
    //  G) insertion operator for printing pointer instances of Checking (i.e., Checking*). Print type, id, owner, balance, monthlyFee, and canWriteChecks
    friend ostream &operator<<(ostream &os, const Checking *checking);
};

ostream &operator<<(ostream &os, const Checking *checking)
{
    os << ((Account *)checking)->monthlyFee() << "\n"
       << (checking->canWriteChecks ? "yes"
                                    : "no");
    return os;
}

int main()
{
    Account *accounts[] = {new Savings(123, "Person 1", 100),
                           new Savings(456, "Person2", 200),
                           new Savings(789, "Person3", 300),
                           new Checking(345, "Person4", 400, false),
                           new Checking(678, "Person5", 500, true),
                           new Checking(999, "Person6", 400, false)};
    // copy constructor test
    Account *savingsCopy = new Savings(dynamic_cast<Savings *>(accounts[0]));
    cout << savingsCopy << endl;
    Account *checkingCopy = new Checking(dynamic_cast<Checking *>(accounts[3]));
    cout << checkingCopy << endl;
    cout << endl
         << endl
         << endl;
    for (Account *acc : accounts)
        if (dynamic_cast<Checking*>(acc))
            cout << ((Checking*) acc) << endl;
        else
            cout << acc << endl;
    return 0;

    try{
        if(1 < 1000){
            cout << "great" <<endl;
        }else{
            throw("trash");
        }
    }catch(double nums){
        cout <<"err" <<endl;
    };
}