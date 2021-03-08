class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer=0;
        for(int i=0;i<nums.size();i++)
        {
            answer ^= nums[i];
        }
        return answer;
    }
};
