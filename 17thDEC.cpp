#include<bits/stdc++.h>
using namespace std;
//In todays problem for finding the max difference between products we get the two largest numbers 
// and two smallest numbers in the array
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int j=nums[n-1];
        int k=nums[n-2];
        int l=nums[0];
        int m=nums[1];
        return ((j*k)-(l*m));
    }
};
//Same code in java
// class Solution {
//     public int maxProductDifference(int[] nums) {
//         Arrays.sort(nums);
//         int sz = nums.length;
//         //picking pairs greedily
//         return (nums[sz-1] * nums[sz - 2]) - (nums[0] * nums[1]);
//     }
// }