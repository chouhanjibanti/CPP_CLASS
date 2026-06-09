// #include<iostream>
// using namespace std;

// class A{
//     int a = 10;
//     int b = 0;
//     int c;
// public:
//     void multiply(){
//       try{
//          c = a/b;
//         cout << c <<endl;
//       }  catch(exception &e){
//             cout << e.what() << endl;
//         }
//     }
// };
// int main(){
//     A obj;
//     obj.multiply();
//     return 0;
// }

#include<iostream>
using namespace std;

class A{
    int a = 10;
    int b = 0;
    int c;

public:
    void multiply(){
        try{
            if(b == 0){
                throw runtime_error("Division by zero is not allowed");
            }

            c = a / b;
            cout << c << endl;
        }
        catch(exception &e){
            cout << e.what() << endl;
        }
    }
};

int main(){
    A obj;
    obj.multiply();
    return 0;
}