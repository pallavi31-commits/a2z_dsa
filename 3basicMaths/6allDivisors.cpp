#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int>p;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                p.push_back(i);
            }
        }
        return p;
    }
};

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    Solution sol;
    vector<int>v;
    v = sol.divisors(n);
    cout<<"All divisor of "<<n<<" are : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}