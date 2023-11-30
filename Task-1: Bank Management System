#include <iostream>
#include <unordered_map>

class Bank 
{
private:
    std::unordered_map<std::string, double> accounts;

public:
    void create() 
    {
        std::string accNum;
        double balance;

        std::cout << "Enter account number: ";
        std::cin >> accNum;

        std::cout << "Enter initial balance: ";
        std::cin >> balance;

        if (accounts.find(accNum) == accounts.end()) 
        {
            accounts[accNum] = balance;
            std::cout << "Account " << accNum << " created with an initial balance of " << balance << ".\n";
        } else {
            std::cout << "Account " << accNum << " already exists.\n";
        }
    }

    void transfer() 
    {
        std::string fromAcc, toAcc;
        double amount;

        std::cout << "Enter source account number: ";
        std::cin >> fromAcc;

        std::cout << "Enter destination account number: ";
        std::cin >> toAcc;

        std::cout << "Enter amount to transfer: ";
        std::cin >> amount;

        if (accounts.find(fromAcc) != accounts.end() && accounts.find(toAcc) != accounts.end()) 
        {
            if (accounts[fromAcc] >= amount) 
            {
                accounts[fromAcc] -= amount;
                accounts[toAcc] += amount;
                std::cout << "Successfully transferred " << amount << " from Account " << fromAcc << " to Account " << toAcc << ".\n";
            } else {
                std::cout << "Insufficient funds in the source account.\n";
            }
        } else {
            std::cout << "One or more accounts do not exist.\n";
        }
    }

    void check() 
    {
        std::string accNum;
        std::cout << "Enter account number: ";
        std::cin >> accNum;

        if (accounts.find(accNum) != accounts.end()) 
        {
            std::cout << "Account " << accNum << " has a balance of " << accounts[accNum] << ".\n";
        } else {
            std::cout << "Account " << accNum << " does not exist.\n";
        }
    }
};

int main() 
{
    Bank bankSystem;
    int choice;

    do 
    {
        std::cout << "1. Create Account\n2. Transfer Money\n3. Check Balance\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) 
        {
            case 1:
                bankSystem.create();
                break;
            case 2:
                bankSystem.transfer();
                break;
            case 3:
                bankSystem.check();
                break;
            case 4:
                std::cout << "Thank you! \n";
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 4);

    return 0;
}
