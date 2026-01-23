#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        while (x != 0) {
            int digit = x % 10;
            x = x / 10;

            // overflow check
            if (ans > INT_MAX/10 || (ans == INT_MAX/10 && digit > 7))
                return 0;
            if (ans < INT_MIN/10 || (ans == INT_MIN/10 && digit < -8))
                return 0;

            ans = ans * 10 + digit;
        }
        return ans;
    }
};

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    Solution obj;
    int p = obj.reverse(n);
    
    if(n<0) cout<<"not a palindrome";
    else if(n==p) cout<<"palindrome";
    else cout<<"not a palindrome";
    
    // cout<<endl<<INT_MAX<<" "<<INT_MIN; //2147483647 -2147483648
}
