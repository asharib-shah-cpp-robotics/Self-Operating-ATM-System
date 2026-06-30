#pragma once 
namespace ATM_System {
    using namespace System;
    public ref class ManagedAccount {
    private:
        String^ accountNumber;
        String^ pin;
        String^ name;
        double balance;
    public:
        ManagedAccount(String^ acc, String^ p, String^ nm, double bal) {
            accountNumber = acc;
            pin = p;
            name = nm;
            balance = bal;
        }
        String^ getAcc() { return accountNumber; }
        String^ getPin() { return pin; }
        String^ getName() { return name; }
        double getBalance() { return balance; }
        void deposit(double amount) {
            if (amount > 0) balance += amount;
        }
        bool withdraw(double amount) {
            double totalDeduction = amount + 5.0; // 5 PKR Service Fee
            if (amount > 0 && totalDeduction <= balance) {
                balance -= totalDeduction;
                return true;
            }
            return false;
        }
    };
}