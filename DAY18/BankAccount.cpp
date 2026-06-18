#include<iostream>
#include<vector>
using namespace std;

class BankAccount{
    private:
       int accountNo;
       string name;
       double balance;

    public:
    // account creation
       void createAccount(){
           cout << "Enter Account number :";
           cin >> accountNo;

           cout << "Enter customer name :";
           getline(cin,name);

           cout << "Enter Initial Balance :";
           cin >> balance;
       }

       // deposit balance 
       void deposit(){
          double amount;

          cout << "Enter amount to deposit : ";
          cin >>  amount;

          balance += amount;


          cout << "Amount deposit Sucessfully";
          cout << "Your current Balance is : " << balance;
       }

       // Withdraw balance 
       void withdraw(){
         double amount;

         cout << "Enter Amount to withdraw : ";
         cin >> amount;
{}
         if(amount>0 && amount < balance) {
              balance -= amount;
              cout << "Withdraw sucessfully";
         }else{
            cout << "insufficient Balance";
         }

         cout << "Your current Balance is : " << balance;
       }

       void display(){
           cout << "\n----------------------------------\n";
           cout << "Account Number : " << accountNo << endl;
           cout << "Customer Name  : " << accountNo << endl;
           cout << "Balance        : " << accountNo << endl;
           cout << "\n----------------------------------\n";
       }

       int getAccountNo(){
        return accountNo;
       }

        int getBalance(){
        return balance;
       }  
};

vector<BankAccount> accounts;

void createAccount(){
    BankAccount acc;
    acc.createAccount();
    accounts.push_back(acc);
    cout << "Account created Sucessfully\n:";
}

void displayAllAccounts(){
    if(accounts.empty()){
        cout << "No Accounts Found \n";
    }

    for(int i=0;i<accounts.size();i++){
        accounts[i].display();
    }
}



