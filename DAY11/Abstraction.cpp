// #include<iostream>
// using namespace std;

// class Shape{
//     public:
//       virtual void area()=0; // pure virtual function
// };

// class Circle : public Shape{
//     public:
//     void area(){
//         cout << "Area of circle = pi*r*r\n";
//     }
// };
// int main(){
//     Shape *s = new Circle();
//     s->area();
// }

// ======================================================

// Vehicle *v;
// v=new Car();
// v-> 
// v-> 

// v=new Bike();
// v->
// v-> 

// ================================================

// class and Object  :- 

// class ->  class is a blueprint of the object.
// Object -> object is memory block who store the varible.

#include<iostream>
using namespace std;

class Calculator{
    public:
    int a , b;

    void setValues(){
        cout << "Enter a & b";
        cin >> a >> b;
    }

    void add(){
        cout << "Sum= " << a+b << endl;
    }
};

int main(){
    Calculator obj;
    obj.setValues();
    obj.add();
    return 0;
}
