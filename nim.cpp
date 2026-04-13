 // LeetCode number : 292. Nim Game

 /* On each turn ,player should take 1 ,2 or 3 ball,
  first who will going to take the ball 
  there winning propability is more when that total number of ball are not multiple
   of 4 otherwise depends on player how they will play */ 

    class Solution {
    public:
    bool canWinNim(int n) {
        if(n%4!=0){
            return true;
        }
            return false;
    
    }
};