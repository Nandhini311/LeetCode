class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int total_sum=0;
        for(int num:nums)
        {
            total_sum += num;
        }
        int answer = sum-total_sum;
        return answer;
    }
};

//bit manipulation
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = 0;
        for(int i=0;i<nums.size();i++)
        {
            result ^= nums[i]^(i+1);
        }
        return result;
    }
};
