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
    int secondLargest = INT_MIN;
    for(int i=0;i<n;i++){
        if(largest < arr[i]){
           largest = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(secondLargest<arr[i] && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    cout<<"The Second largest element of array is "<<secondLargest;
}