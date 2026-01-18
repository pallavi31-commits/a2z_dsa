#include<iostream>
using namespace std;
int main(){
    //stoi : string to integer
    string s = "1234";
    int y = stoi(s);
    cout<<y+1<<endl;

    // stoll : string to long long
    string r = "1234567891932";
    long long x= stoll(r);
    cout<<x+1;
}