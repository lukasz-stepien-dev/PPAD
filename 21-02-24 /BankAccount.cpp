#include <iostream>

class BankAccount {
private:
    long long accountNumber;
    int balance;
    void printBalance()
    {
        std::cout << "Numer rachunku: " << this->accountNumber << std::endl;
        std::cout << "Aktualny stan konta: " << this->balance << std::endl;
    }
public:
    void ante(double amount)
    {
        this->accountNumber += amount;
        printBalance();
    }
    void withdraw(double amount)
    {
        if ((this->balance - amount) > 0 )
        {
            this->balance -= amount;
            printBalance();
        }
        else
        {
            std::cout << "Masz za mało pięniedzy aby wypłacić: " << amount << std::endl;
        }
    }
};