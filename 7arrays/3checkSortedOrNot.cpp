#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums){
            vector<int>ans;
            ans = nums;
            sort(ans.begin(),ans.end());
            if(ans==nums){
                return true;
            }else{
                return false;
            }
		}
};

int main(){
    
    Solution sol;
    
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int>v;
    
    cout<<"Enter the element of vector : ";
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    if(sol.isSorted(v)){
        cout<<"Sorted";
    }else{
        cout<<"Not Sorted";
    }
    
} 