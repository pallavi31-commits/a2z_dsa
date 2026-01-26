#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of row : ";
    cin>>n;

    int p=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            cout<<j+1;
        }
        p--;
        cout<<endl;
    }
}