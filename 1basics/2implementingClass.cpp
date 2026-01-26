#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void printNumber(){ //non-static member function i.e call by object
        int n;
        cin>>n;
        cout<<n;
    }
};

int main(){
    //creating an instance of Solution class
    Solution sol;

    sol.printNumber();
}