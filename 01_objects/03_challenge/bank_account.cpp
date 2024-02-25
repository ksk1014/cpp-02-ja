// コードを入力してください
#include "bank_account.h"

BankAccount::BankAccount(int balance)
    : balance(balance){
        if(balance < 0){
            std::cerr << "Negative value" << "\n";
        }
    }

void BankAccount::deposit(int amount){
    if(amount < 0){
        std::cerr << "Negative value" << "\n";
    }else{
        balance += amount;
        std::cout <<  BankAccount::get_balance() << std::endl;;
    }
    
};
void BankAccount::withdraw(int amount){
    if(amount < 0){
        std::cerr << "Insufficient balance!" << "\n";
    }else if(balance < amount){
        std::cerr << "Insufficient balance!" << "\n";
    }else{
        balance -= amount;
        std::cout <<  BankAccount::get_balance() << std::endl;;
    }
};
int BankAccount::get_balance(){
    int balance = BankAccount::balance;
    return balance;
};
