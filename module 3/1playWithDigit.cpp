#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int lastDigit = 0;
    int sum = 0;
    int prd = 1;
    int count = 0;

    while(n>0){
        lastDigit = n%10;
        sum += lastDigit;
        prd *= lastDigit;
        n = n/10;
        count ++;
    }
    
    cout<<"number of digit is "<<count<<endl;
    cout<<"sum of digit is "<<sum<<endl;
    cout<<"product of digit is "<<prd;

}