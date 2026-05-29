// #include<iostream>
// using namespace std;

// class Student{
//     private: 
//       int marks; // data hidden

//     public:
//         void setMarks(int m){
//             marks = m;
//         }
//         void showMarks(){
//             cout << "marks = " << marks; 
//         }   
// };

// int main(){
//     Student s;
//     s.setMarks(100);
//     s.showMarks();
//     return 0;

// }

// ==================================================


#include<iostream>
using namespace std;

class BankAccount{
    private:
      double balance;
    public:
       // setter function (controlled access)
       void deposit(double amount){
         if(amount >0 ){
            balance += amount;
         }
       }

       // setter function
       void withdraw(double amount){
         if(amount >0 && amount <= balance){
            balance -= amount;
         }else{
            cout << "Insufficient Balance " << endl;
         }
       }

       // getter function 
       void showBalance(){
          cout << "Current Balance = " << balance << endl;
       }
};

int main(){
    BankAccount acc;
    acc.deposit(5000);
    acc.withdraw(12000);
    acc.showBalance();

    return 0;
}
