#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of row : ";
    cin>>n;

    int m;
    cout<<"Enter number of column : ";
    cin>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}