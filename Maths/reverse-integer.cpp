//reverse-integer
class Solution {
public:
    int reverse(int x) {
        int last,rev=0;
        
        while(x!=0){
            last=x%10;
            x=x/10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10)
         {
            return 0;
         }   
            rev=(rev*10)+last;
        }
        return rev;
    }

};
