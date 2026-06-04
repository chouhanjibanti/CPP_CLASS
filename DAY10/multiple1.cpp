// #include<iostream>
// using namespace std;

// class A{
//     public:
//       void showA(){
//          cout << "This is class A\n";
//       }
// };

// class B{
//     public:
//       void showB(){
//         cout << "This is class B\n";
//       }
// };

// class C : public A , public B{
//     public:
//        void showC(){
//         cout << "This is class C\n";
//        }
// };
// int main(){
//     C obj1;
//     obj1.showA();
//     obj1.showB();
//     obj1.showC();
// }


#include<iostream>
using namespace std;

class A {
    public:
     void showA(){
          cout << "This is class A\n";
     }
};

class B : public A{
    public:
     void showB(){
          cout << "This is class B\n";
     }
};

class C : public A{
    public:
     void showC(){
          cout << "This is class C\n";
     }
};

int main(){
    B obj1;
    C obj2;

    obj1.showA();
    obj1.showB();
    
    obj2.showA();
    obj2.showC();
}