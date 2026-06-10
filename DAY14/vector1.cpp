#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v;
    int count =0;

    // insert 
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);

    // Display 
    cout << "Vector Elements :";
    for(int x1:v) cout << x1 << " ";
    cout << endl;

    // sort 
    sort(v.begin(), v.end());

    cout << "sorted :";
    for(int x1:v) cout << x1 << " ";

    for(int x1:v) {
        count++;
    }
    cout << count << endl;

    // 



    return 0;
}