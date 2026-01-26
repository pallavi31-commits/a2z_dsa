#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of row : ";
    cin>>n;

    //0-based indexing
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //1-based indexing
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
}