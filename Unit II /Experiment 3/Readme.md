Experiment 3 

#include <iostream>
#include <string>

class BankAccount; 

class AccountAuditor {
public:
    void auditAccount(const BankAccount& account);
};

class BankAccount {
private:
    std::string accountHolder;
    double balance;
    static int totalAccounts; 

public:
    BankAccount(std::string name, double initialDeposit) {
        accountHolder = name;
        balance = initialDeposit;
        totalAccounts++; 
    }

    static int getTotalAccounts() {
        return totalAccounts;
    }

    friend void transferFunds(BankAccount& from, BankAccount& to, double amount);
    friend class AccountAuditor; 
};

int BankAccount::totalAccounts = 0;

void transferFunds(BankAccount& from, BankAccount& to, double amount) {
    if (from.balance >= amount) {
        from.balance -= amount; 
        to.balance += amount;   
        std::cout << "Successfully transferred ₹" << amount << " from " 
                  << from.accountHolder << " to " << to.accountHolder << ".\n";
    } else {
        std::cout << "Transfer failed: Insufficient funds in " << from.accountHolder << "'s account.\n";
    }
}

void AccountAuditor::auditAccount(const BankAccount& account) {
    std::cout << "[AUDIT LOG] Holder: " << account.accountHolder 
              << " | Secure Balance Check: ₹" << account.balance << "\n";
}

int main() {
    BankAccount acc1("Rahul", 50000.0);
    BankAccount acc2("Priya", 30000.0);

    std::cout << "Total Bank Accounts Active: " << BankAccount::getTotalAccounts() << "\n\n";

    AccountAuditor auditor;
    auditor.auditAccount(acc1);
    auditor.auditAccount(acc2);
    std::cout << "\n";

    transferFunds(acc1, acc2, 15000.0);
    std::cout << "\n";

    auditor.auditAccount(acc1);
    auditor.auditAccount(acc2);

    return 0;
}
