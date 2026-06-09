// Compile time polymorphism (overloading)
// #include<iostream>
// using namespace std;

// class Math{
//     public:
//      int add(int a , int b){
//         return a+b;
//      }

//      float add(float a , float b){
//         return a+b;
//      }
// };

// int main(){
//     Math obj;
//     cout << obj.add(5,10) << endl;
//     cout << obj.add(2.3f,3);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     float a = 10.4f;
// int b = a;
// cout << b;
// }

// =========================================

// Run time Polymorphism :(Method Overriding):-  

// #include<iostream>
// using namespace std;

// class A{
//     public:
//       virtual void show(){
//         cout << "Class A\n";
//       }
// };

// class B : public A{
//   public:
//    void show() override{
//      cout << "Class B\n";
//    }
// };

// int main(){
//     A* ptr;
//    B obj;
//    ptr = &obj;
//    ptr -> show();
// }

// Animal - parent class -animal makes sounds
// Dog , cat - child classes   -> Dog barks , cat meows

#include<iostream>
using namespace std;

class Animal{
  public:
  virtual void sound(){
    cout << "Animal makes a sound" << endl;
  }
};

class Dog :public Animal{
  public:
      void sound() override{
        cout << "Dog Barks" << endl;
      }
};

class Cat:public Animal{
  public:
    void sound() override{
      cout << "Cat meows"<< endl;
    }
};

int main(){
  Animal* ptr;

   Dog d;
   Cat c;

   ptr = &d;
   ptr-> sound(); // calls Dog's sound

   ptr = &c;
   ptr->sound(); // calls cat's sound

   return 0;
}