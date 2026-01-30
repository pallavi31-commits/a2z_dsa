#include<iostream>
using namespace std;

int print(int n){
    if(n<=0) return 0;
    cout<<"hello"<<" ";
    print(n-1);
}

int main(){
    int n;
    cout<<"Enter number of time you want to print : ";
    cin>>n;

    print(n);
}