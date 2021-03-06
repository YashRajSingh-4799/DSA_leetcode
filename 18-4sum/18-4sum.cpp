class Solution
{
    public:
        vector<vector < int>> fourSum(vector<int> &nums, int target)
        {

            sort(nums.begin(), nums.end());
            set<vector < int>> set;
            vector<vector < int>> a;
            int low = 0;
            int high = nums.size() - 1;
            int sum = 0;
            int new_target = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                if (i > 0 && nums[i] == nums[i - 1])
                {
                   	//cout << "ener" << endl;
                    continue;
                }
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if (j > i + 1 && nums[j] == nums[j - 1] && nums[i] != nums[j])
                    {
                        cout << "ener" << endl;
                        continue;
                    }
                    low = j + 1;
                    high = nums.size() - 1;
                    new_target = nums[i] + nums[j];
                    while (low < high)
                    {
                        sum = nums[low] + nums[high];
                        if (sum == target - new_target)
                        {
                            set.insert({ nums[i],
                                nums[j],
                                nums[low],
                                nums[high] });
                            low += 1;
                            while (nums[low] == nums[low - 1] && low < high)
                            {
                               	//cout << "ener" << endl;
                                low += 1;
                            }
                        }
                        else if (sum > (target - new_target))
                        {
                            high--;
                        }
                        else if (sum < (target - new_target))
                            low++;
                    }
                }
            }

            for (auto it: set)
                a.emplace_back(it);
            return a;
        }
};