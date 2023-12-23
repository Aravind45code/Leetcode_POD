#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<char,pair<int,int>> moves;
        moves['N']={0,1};
        moves['S']={0,-1};
        moves['W']={-1,0};
        moves['E']={1,0};
        unordered_set<string> visited;
        visited.insert("0,0");
        int x=0;
        int y=0;
        for(char c:path){
            pair<int,int> curr=moves[c];
            int dx=curr.first;
            int dy=curr.second;
            x+=dx;
            y+=dy;
            string hash=to_string(x)+","+to_string(y);
            if(visited.find(hash)!=visited.end()){
                return true;
            }
            visited.insert(hash);
        }
        return false;
    }
    
};
//Same code in java
// class Solution {
//     public boolean isPathCrossing(String path) {
//       Map<Character,Pair<Integer,Integer>> moves=new HashMap();
//       moves.put('N',new Pair(0,1));
//       moves.put('S',new Pair(0,-1));
//       moves.put('W',new Pair(-1,0));
//       moves.put('E',new Pair(1,0));
//       Set<Pair<Integer,Integer>> visited=new HashSet();
//       visited.add(new Pair(0,0));
//       int x=0;
//       int y=0;
//       for(Character c:path.toCharArray()){
//           Pair<Integer,Integer> curr=moves.get(c);
//           int dx=curr.getKey();
//           int dy=curr.getValue();
//           x+=dx;
//           y+=dy;
//           Pair<Integer,Integer> pair=new Pair(x,y);
//           if(visited.contains(pair)){
//               return true;
//           }
//           visited.add(pair);
//       }  
//       return false;
//     }
// }