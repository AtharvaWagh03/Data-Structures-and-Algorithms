class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)   return 0;
        int num = x;
        long res= 0;
        while(num) {
            res = res*10 + num%10;
            num = num/10;
        }
        return (res == x);
    }
};