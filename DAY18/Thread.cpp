// #include<iostream>
// #include<thread>
// using namespace std;

// // void task(){
// //     cout << "task Running \n";
// // }

// // int main(){
// //     thread t(task);
// //     t.join();
// //     cout << "Main functions ended";
// //     return 0;
    
// // }

// void printNumber(){
//     for(int i=1;i<=5;i++){
//         cout << "Thread 1 " << i << endl;
//     }
// }

// void printCharacter(){
//     for(char ch='A';ch<='E';ch++){
//         cout << "Thread 2 " << ch << endl;
//     }
// }

// int main(){
//    thread t1(printNumber);
//    thread t2(printCharacter);

//    t1.join();
//    t2.join();

//    cout << "Main Functions ended" ;
// }