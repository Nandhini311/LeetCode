class Solution {
public:
    int reverse(int x) {
        long ans =0;
        while(x)
        {
            ans = ans*10 + x%10;
            x = x/10;
        }
        if((ans>INT_MAX) || (ans<INT_MIN))
            return 0;
        else
            return ans;
                
    }
};
