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




var lastStoneWeight = function(stones) {
    if (stones.length == 1){                 // base case
      return stones
    } else if (stones.length == 0){          // base case
      return 0
    }
    let heavy1 = Math.max(...stones) 
    console.log(heavy1);// grabs heaviest stone
    stones.splice(stones.indexOf(heavy1), 1)
    console.log(stones.indexOf(heavy1), 1)// removes heaviest stone
    let heavy2 = Math.max(...stones)
    console.log(heavy2)// grabs 2nd heaviest stone
    stones.splice(stones.indexOf(heavy2), 1) // removes 2nd heaviest stone
    if (heavy1 > heavy2) {               
      let newStone = heavy1 - heavy2         // find difference
      stones.push(newStone) 
      console.log(newStone);// push difference to stones
    }
    // calls on the function again until base case is true
    return lastStoneWeight(stones);
  };
  
  // lastStoneWeight(stones);
  stones =[2,7,4,1,8,1];