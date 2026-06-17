#include<iostream>
using namespace std;

class Cons{
    int a, b;
 public:   
     Cons(){
        a=1;
        b=2;
     }
     void set(){
        cout << "Enter the value or a,b";
        cin >> a>> b;
     }

     void add(){
        cout << "Sum = " << a+b << endl;
     }
};

int main(){
    Cons obj;
    obj.add();
    obj.set();
    obj.add();
    return 0;

}


// A copy constructor is used to copy the value of one obj to another object.
#include<iostream>
using namespace std;

class A{
    int x;
public:
   A(int y){
     x = y;
   }
   A(A &ob){
      x=ob.x;
   }

   void show(){
    cout << "value of x = "<< x << endl;
   }
};

int main(){
    A ob(10);
    ob.show();

    A obj(ob);
    obj.show();

    return 0;


}