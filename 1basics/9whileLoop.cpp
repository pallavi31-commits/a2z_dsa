#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number whose factorial you want : ";
    cin>>n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers.";
        return 0;
    }

    int fact = 1;
    cout<<"Factorial of "<<n<<" is : ";

    while(n>0){
        fact*=n;
        n--;
    }
    cout<<fact;
}