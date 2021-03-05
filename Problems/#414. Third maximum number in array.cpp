class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int first = LONG_MIN;
        long long int second = LONG_MIN, third=LONG_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>first)
            {
                third = second;
                second = first;
                first = nums[i];
            }
            else if(second<nums[i] && first != nums[i])
            {
                third = second;
                second = nums[i];
            }
            else if(third<nums[i] && second != nums[i] && first != nums[i] )
            {
                third = nums[i];
            }
        
        }
        return (third == LONG_MIN ? first : third);
    }
};
