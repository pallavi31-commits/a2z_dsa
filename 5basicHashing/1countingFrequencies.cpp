#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int frequency(int n,vector<int>&v){
        int count = 0;
        for(int i=0;i<v.size();i++){
            if(n==v[i]){
                count++;
            }
        }
        return count;
    }
};

int main(){

    int n;
    cout<<"enter a target : ";
    cin>>n;

    vector<int>v; //[9, 19, 8, 2, 1, 1, 9, 2, 1, 1]
    v.push_back(9);
    v.push_back(19);
    v.push_back(8);
    v.push_back(9);
    v.push_back(19);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(9);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);

    Solution sol;
    cout<<sol.frequency(n,v);
}