#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The elements of array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<endl<<"size of array is "<<size;

    //array of string

    string srr[3];

    cout<<endl<<"Enter the 3 string : ";
    for(int i=0;i<3;i++){
        cin>>srr[i];
    }

    cout<<"the strings are ";
    for(int i=0;i<3;i++){
        cout<<srr[i]<<" ";
    }

    //sizeof(string) is typically 24 bytes in C++, 
    //and it does not depend on the length of the string.
    cout<<endl<<sizeof(srr)<<" "<<sizeof(srr[0])<<" "<<sizeof(srr)/sizeof(srr[0]);
}