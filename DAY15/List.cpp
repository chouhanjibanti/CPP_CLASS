// #include<iostream>
// #include<list>

// using namespace std;

// int main(){
//     list<int> l;

//     l.push_back(30);
//     l.push_front(10);
//     l.push_back(20);

//     cout << "List : " ;
//     for(int x:l) cout << x << " "; 

//     // Remove 
//     l.remove(20);
//     cout << "After Remove : " ;
//     for(int x:l) cout << x << " ";


// }


// ==============================================

// Set :- Example 

// #include<iostream>
// #include<set>

// using namespace std;
// int main(){
//     set<int> s;

//     // insert  the elements 
//     s.insert(40);
//     s.insert(10);
//     s.insert(30);
//     s.insert(10); // duplicate ignored

//     cout << "Set : " ;
//     for(int x:s) cout << x << " ";

//     // search 
//     if(s.count(50)) cout << "\n10 present";
//     else cout << "\n10 is not present";

//     return 0;
// }


// ====================================================

// Map :- 

// Map stored items in the key - value pair format (sorted by key)

// when to use :- 
// 1. for key and value pair data 
// 2. Fast Searching by key 

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<int,string> m;

//     m[101] = "aman";
//     m[102] = "atishay";
//     m[103] = "sagar";

//     cout << "Roll No -> Name\n";
//     for(auto x:m)
//      cout << x.first << "-> " << x.second << endl;

//      return 0;
// }

// ===================================

// Stack :- it will work on the FILO principle

// #include<iostream>
// #include<stack>

// using namespace std;

// int main(){
//     stack<int> st;

//      st.push(10);
//      st.push(20);
//      st.push(30);

//      cout << st.top() << endl;
//      cout << st.size(); 
// }

// ==========================================

// Queue :- Principle FIFO

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//    queue<int> q;

//    q.push(10);
//    q.push(20);
//    q.push(30);

//    cout << q.front();
// }