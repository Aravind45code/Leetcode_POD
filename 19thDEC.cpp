#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        if((money-(prices[0]+prices[1]))>=0){
            return money-(prices[0]+prices[1]);
        }
        return money;
    }
};