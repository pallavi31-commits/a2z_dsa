#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    string removeOutermostParentheses(string s){
        int n = s.size();
        int level = 0;
        string result = "";
        for(int i=0;i<n;i++){
            char st = s[i];
            if(st=='('){
                if(level>0) result+=st;
                level++;
            }
            else{
                level--;
                if(level>0) result+=st;
            }
        }
        return result;
    }
};

int main(){
    Solution sol;
    string str = "()((()))";
    int n = str.size();
    
    string ans = sol.removeOutermostParentheses(str);

    cout<<ans;
}