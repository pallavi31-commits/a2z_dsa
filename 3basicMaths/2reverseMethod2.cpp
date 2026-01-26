#include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int reverse(int x) {
        long long ans = 0;

        while (x != 0) {
            int digit = x % 10;
            ans = ans * 10 + digit;
            x = x / 10;
        }

        // manual 32-bit range check
        if (ans < -2147483648LL || ans > 2147483647LL)
            return 0;

        return (int)ans;
    }
};

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    Solution obj;
    cout<<obj.reverse(n);
}
