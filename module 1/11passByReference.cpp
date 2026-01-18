#include<bits/stdc++.h>
using namespace std;

void display(int arr[5]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    arr[3] = 5;
}

int main(){
    int arr[5] ={9,4,5,8,2};

    display(arr);

    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}