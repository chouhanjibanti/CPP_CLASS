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

// #include<iostream>
// using namespace std;

// class A{
//     int a = 10;
//     int b = 0;
//     int c;

// public:
//     void multiply(){
//         try{
//             if(b == 0){
//                 throw runtime_error("Division by zero is not allowed");
//             }

//             c = a / b;
//             cout << c << endl;
//         }
//         catch(exception &e){
//             cout << e.what() << endl;
//         }
//     }
// };

// int main(){
//     A obj;
//     obj.multiply();
//     return 0;
// }

// ===============================================

// Arithmetic Exception :- 

// #include<iostream>
// using namespace std;

// int main(){
//    try{
//     int a ,b;
//      cout << "Enter two Numbers :";
//      cin >> a >>b;

//      if(b == 0){
//         throw "Division by zero not allowed";
//      }
//      cout << "Result = " << a/b;
//    }catch(const char* msg){
//     cout << "Error : " << msg;
//    }  
// }

// ============================================

// choice 1 or 2 :-  

// #include<iostream>
// using namespace std;

// int main(){
//     try{
//         int choice;
//         cout << "Enter 1 or 2: ";
//         cin >> choice;

//         if(choice ==1){
//             throw 10;
//         }else{
//             throw string("String Exception occured");
//         }
//     }catch(int x){
//         cout << "Integer Exception " << x;
//     }catch(string s){
//         cout << "String exception " << s;
//     }
// }

// =======================================

// if age is less then 18 -> you are not eligible for vote
// Array Index out of Bounds Exception


// #include<iostream>
// using namespace std;

// int main(){
//    int age;
//      cout << "Enter the age :";
//      cin >> age;

//     try{
//          if(age<18){
//         throw "Not eligible for vote";
//      }
//       cout << "Eligible to vote";
//     }
//     catch(const char* msg){
//     cout << msg;
//    }  
// }

// ==========================================

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {1,2,3,4,5};
//    int index;
//      cout << "Enter the index :";
//      cin >> index;

//     try{
//         if(index<0 || index >=5){
//             throw "Array index out of Bounds";
//         }
//         cout << "Value = " << arr[index];
//     }catch(const char* msg){
//     cout << "Error : " << msg;
//    }  
// }


#include<iostream>
using namespace std;

int main(){
   string password;
     cout << "Enter the Password :";
     cin >> password;

    try{
        if(password.length() <8){
            throw "Password must be at least 8 characters ";
        }
        cout << "Password Accepted";
    }catch(const char* msg){
      cout  << msg;
   }  
}

