//here in this problem ,the max area is the max width between two vertical lines.ANd here these two vertical should 
//not contain any points between them .So for that we collect all the x-axis points into a vector and then sort that
//vector (to handle the case of points in between the vertical lines).After that as a final step ,we find the max
//difference between the elements in that vector(which is the width)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>temp;
        //collecting all the x-axis points
        for(int i=0;i<points.size();i++){
            temp.push_back(points[i][0]);
        }
        //sorting all the points in that vector
        sort(temp.begin(),temp.end());
        int ans=INT_MIN;
        //finding the max difference between adjacent elements in that array
        for(int i=1;i<temp.size();i++){
            ans=max(ans,temp[i]-temp[i-1]);
        }
        //Then we return the max width from the array elements
        return ans;
    }
};
//same code in java
// class Solution {
//     public int maxWidthOfVerticalArea(int[][] points) {
//         ArrayList<Integer> arr1=new ArrayList<Integer>(points.length);
//         for(int i=0;i<points.length;i++){
//             arr1.add(points[i][0]);
            
//         }
//         Collections.sort(arr1);
//         int ans=Integer.MIN_VALUE;
//         for(int i=1;i<arr1.size();i++){
//             int temp=arr1.get(i)-arr1.get(i-1);
//             ans=Math.max(ans,temp);
//         }
//         return ans;
//     }
// }