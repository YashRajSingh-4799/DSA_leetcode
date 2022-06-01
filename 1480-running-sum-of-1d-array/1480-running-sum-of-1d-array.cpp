class Solution
{
    public:
        vector<int> runningSum(vector<int> &nums)
        {
            int tmp = 0;
            for (int i = 0; i < nums.size(); ++i)
            {
                nums[i] += tmp;
                tmp = nums[i];
            }
            return nums;
        }
};