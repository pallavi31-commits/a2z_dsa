#include<bits/stdc++.h>
using namespace std;

void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.push_back(1);
}

int main(){
    vector<int>v;
    v.push_back(7);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);

    display(v);
    cout<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}