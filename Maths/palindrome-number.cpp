// Problem: Palindrome Number
// Platform: LeetCode
// Difficulty: Easy
// Approach: Reverse full number and compare
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int rev=0,temp;
        int last;
        temp=x;
        while(x>0)
        {
            last=x%10;
            x/=10;
            rev=(rev*10)+last;
        } 
        return temp==rev;
    }
};
