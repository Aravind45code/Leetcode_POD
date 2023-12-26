#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
#define MOD 1000000007
int dp[32][1002];
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return solve(n,k,target);
    }
    int solve(int n,int k,int t){
        if(n==0 && t==0) return 1;
        if(n<=0 || t<=0) return 0;
        if(dp[n][t]!=-1) return dp[n][t];
        int sum=0;
        for(int i=1;i<=k;i++){
            sum=(sum%MOD +solve(n-1,k,t-i)%MOD)%MOD;
            //here the time complexity is n*k*t 
            //It is because the solve functions gets called for n*t times because we send the same n-1 for differnt t-i values(till it becomes zero) ,which gives us n*t complexity
           // So that is how we get n*k*t
        }
        dp[n][t]=sum;
        return dp[n][t];
    }
};