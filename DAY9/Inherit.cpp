// #include<iostream>
// using namespace std;

// class Parent{
// public:
//    void showParent(){
//       cout << "This is Parent\n";
//    }
// };

// class Child : public Parent{
// public:
//    void showChild(){
//       cout << "This is Child class\n";
//    }
// };
// int main(){
//     Child obj;
//     obj.showChild();
//     obj.showParent();
//     return 0;
// }

// camelcase :- variable , functions --->  fanPrice
// pascalCase :- className -> ParentData
// snake_case :- show_data

// ==================================================

// Multi Level Inhertance :-  

#include<iostream>
using namespace std;


class GrandParent{
public:
     void propertyAccess(){
        cout << "property accessible from grand Parent\n";
     }
};

class Parent : public GrandParent{
public:
     void propertyAccess1(){
        cout << "property accessible from parent\n";
     }
};

class Child : public Parent{
public:
   void propertyAccess2(){
       cout << "property accessible from the child\n";
   }
};

int main(){
   GrandParent obj;
   obj.propertyAccess();
   // obj.propertyAccess1();
   // obj.propertyAccess2();

   return 0;
}

