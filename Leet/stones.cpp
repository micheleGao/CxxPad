// You are given an array of integers stones where stones[i] is the weight of the ith stone.

// We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. Suppose the heaviest two stones have weights x and y with x <= y. The result of this smash is:

// If x == y, both stones are destroyed, and
// If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
// At the end of the game, there is at most one stone left.

// Return the smallest possible weight of the left stone. If there are no stones left, return 0.

// Input: stones = [2,7,4,1,8,1]
// Output: 1
// Explanation: 
// We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
// we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
// we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
// we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of the last stone.

// Input: stones = [1]
// Output: 1

#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==0)return 0;
        if(stones.size()==1)return stones[0];
        priority_queue<int>pq(stones.begin(),stones.end());
        while(!pq.empty()){
            if(pq.size()>1){
                int a=pq.top(),b=0;
                pq.pop();
                b=pq.top();
                pq.pop();
                b=abs(a-b);
                pq.push(b);
            }
            if(pq.size()==1){
                return pq.top();
            }
        }
        return 0;
    }
int main() {
    vector<int>v={2,7,4,1,8,1};
    int z=lastStoneWeight(v);
    cout << z <<endl;
}
