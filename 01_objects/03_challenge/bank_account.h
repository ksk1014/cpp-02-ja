// コードを入力してください
#include <iostream> 

class BankAccount {
public:
    BankAccount(int balance);

    void deposit(int amount);
    void withdraw(int amount);

    int get_balance();

private:
    int balance;
};
