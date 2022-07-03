class Solution
{
    public:
        int wiggleMaxLength(vector<int> &nums)
        {
            vector<int> v;
            nums.erase(unique(nums.begin(), nums.end()), nums.end());
            for (int i = 0; i < nums.size() - 1; i++)
            {
                v.push_back(nums[i + 1] - nums[i]);
            }
            if (nums.size() == 1)
            {
                return 1;
            }
            int ans = 1;
            int temp = v[0];
            for (int i = 0; i < v.size(); i++)
            {
                if (temp *v[i] < 0)
                {
                    ans++;
                    temp = v[i];
                }
            }
            return ans + 1;
        }
};