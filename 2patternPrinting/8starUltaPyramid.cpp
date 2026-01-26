#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of row : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=(n*2+1)-2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
} 