#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;

    cout<<s<<endl;

    int size = s.length();
    
    for(int i=0;i<size;i++){
        cout<<s[i]<<" ";
    }

}