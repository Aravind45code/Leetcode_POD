#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        vector<int>dp(n+1,-1);
        int ans=helper(s,n,dp);
        return ans;
        
    }
    int helper(string& s,int n,vector<int>& dp){
        if(n==0){
            return dp[n]=1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int count=0;
        if(s[n-1]!='0'){
            count+=helper(s,n-1,dp);
        }
        if(n>1 && stoi(s.substr(n-2,2))>=10 && stoi(s.substr(n-2,2))<=26)
            count+=helper(s,n-2,dp);
        return dp[n]=count;
    }
    
};
