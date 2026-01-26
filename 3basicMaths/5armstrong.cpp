#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {

        int count = 0;
        int p = n;
        int ans = 0;

        while(p!=0){
            p = p/10;
            count++;
        }

        p=n;
        while(p>0){
            int sum = 1;
            int lastDigit = p%10;

            for(int i=0;i<count;i++){
            sum = sum * lastDigit;
            }

            ans = ans + sum;
            p = p/10;
            
        }
        return n==ans;
    }
};

int main(){
    Solution sol;

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    if(sol.isArmstrong(n)){
        cout<<n<<" is an armstrong number.";
    }
    else{
        cout<<n<<" is not an armstrong number.";       
    }
}