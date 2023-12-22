#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(string s) {
        int ones=0;
        for(auto i:s){
            if(i=='1'){
                ones+=1;
            }
        }
        int zeros=0;
        int max_score=0;
        for(int i=0;i<s.size()-1;i++){
            zeros+=s[i]=='0';
            ones-=s[i]=='1';
            max_score=max(max_score,zeros+ones);
        }
        return max_score;
    }
};
//Same code in java
// class Solution {
//     public int maxScore(String s) {
//         int ones_in_string=0;
//         for(char i:s.toCharArray()){
//             if(i=='1'){
//                 ones_in_string+=1;
//             }
//         }
//         int max_score=0;
//         int zeros_left=0;
//         for(int i=0;i<s.length()-1;i++){
//             if(s.charAt(i)=='0'){
//                 zeros_left+=1;
//             }
//             if(s.charAt(i)=='1'){
//                 ones_in_string-=1;
//             }
//             max_score=Math.max(max_score,zeros_left+ones_in_string);
            
//         }
//         return max_score;

//     }
// }