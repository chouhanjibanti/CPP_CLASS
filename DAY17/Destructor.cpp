#include<iostream>
using namespace std;

class Student{
    public:
       Student(){
         cout << "This is Constructor" << endl;
       }

       ~Student(){
        cout << "This is my Destructor" << endl;
       }
};

int main(){
    Student s;
    return 0;
}

// flow 
// main()
//    |
// create student object
//   |
// constructor runs 
//   |
// program ends
//  |
// Destructor runs 