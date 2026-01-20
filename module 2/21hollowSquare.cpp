#include<iostream>
using namespace std;

int main(){
    int p;
    cout<<"Enter number of row : ";
    cin>>p;

    for(int i=0;i<p;i++){
        for(int j=0;j<p;j++){
            if(i==0 || i==p-1 || j==0 || j==p-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}