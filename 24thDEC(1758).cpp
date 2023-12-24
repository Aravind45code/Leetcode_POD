#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(string s) {
        char c_0=s[0];
        int count1=count(s,c_0);
        int count2=count(s,c_0=='0'?'1':'0')+1;
        return min(count1,count2);

    }
    int count(string s,char pre){
        int count=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==pre){
                count++;
               pre=pre=='0'?'1':'0';
            }
            else{
                pre=s[i];
            }
        }
        return count;
    }
};
//same code in java
// class Solution {
//     public int minOperations(String s) {
//         char c_0=s.charAt(0);
//         int count1=count(s,c_0);
//         int count2=count(s,c_0=='0'?'1':'0')+1;
//         //here the +1 is for the initial change
//         return Math.min(count1,count2);
//     }
//     private int count(String s,char c_pre){
//         int count=0;
//         for(int i=1;i<s.length();i++){
//             char current=s.charAt(i);
//             if(current==c_pre){
//                 count++;
//                 c_pre=c_pre=='0'?'1':'0';
//             }
//             else{
//                 c_pre=current;
//             }
//         }
//         return count;
//     }
// }