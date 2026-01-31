#include<iostream>
using namespace std;

class Solution{
public:
    int factorial(int n){
        if(n<0) return -1;
        if(n==0) return 1;
        return n*factorial(n-1);
    }
};

int main(){

    Solution sol;

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(n>=0) cout<<sol.factorial(n);
    else cout<<"Factorial is not defined for negative number.";
}