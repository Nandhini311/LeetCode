class Solution {
public:
    int xorOperation(int n, int start) {
        int bit =0;
        for(int i=0;i<n;i++)
        {
            bit = bit^(start+2*i);
        }
        return bit;

  }
};
