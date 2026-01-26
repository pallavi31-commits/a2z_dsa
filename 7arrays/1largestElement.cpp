// #include<iostream>
// #include<climits>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(largest < arr[i]){
           largest = arr[i];
        }
    }
    cout<<"The largest number of array is "<<largest;
}
