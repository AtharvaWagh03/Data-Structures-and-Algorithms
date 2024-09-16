class Solution {
public:
    int reverse(int x) {
        int num = x;
        long res = 0;
        int digit = 0;
        while(num) {
            digit = num%10;
            res = res*10 + digit;
            num = num/10;
        }
        if(res >INT_MAX || res<INT_MIN) return 0;
        return res;
    }
};