#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=0;i<n;i++){
        if(i%2 == 0){
            cout<<i<<" is even number"<<endl;
        }
        else{
            cout<<i<<" is odd number"<<endl;
        }
    }

    //nested for loop

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

}