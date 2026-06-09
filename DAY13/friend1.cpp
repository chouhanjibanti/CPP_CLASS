// #include<iostream>
// using namespace std;

// class A{
//     int a , b;
// public:
//   A(){
//     a = 10;
//     b = 30;
//   }
//   friend void max(A ob);
// };

// void max(A ob){
//     if(ob.a > ob.b){
//         cout << "Max = "<< ob.a;
//     }else{
//         cout << "Max = " << ob.b;
//     }
// }
// int main(){
//     A ob;
//     max(ob);
//     return 0;
// }

//  Calculate Average of the two number Using Friend Function where variable like a,b,c;

// Que :- 1 Friend Function of Two Classes :- Program: Friend Function Accessing Two Classes

#include<iostream>
using namespace std;

class B;
class A{
    int a;
public:
    A(){
        a = 10;
    }
    friend void max(A ob , B obj);
};

class B{
    int b;
public:
   B(){
     b = 20;
   }
   friend void max(A ob, B obj);
};

void max(A ob, B obj){
    if(ob.a > obj.b){
        cout << "a is greater" << endl;
    }else{
        cout << "b is greater" << endl;
    }
}

int main(){
  A ob;
  B obj;
  max(ob, obj);
  return 0;
}

