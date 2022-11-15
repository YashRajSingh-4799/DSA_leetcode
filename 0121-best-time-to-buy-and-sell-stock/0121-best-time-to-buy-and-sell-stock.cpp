class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int pro=0,mini=INT_MAX,maxi=0;
            for (int i = 0; i < prices.size(); i++)
            {
                if(prices[i]<mini){
                    mini=prices[i];
                    pro=0;
                }else{
                    pro=prices[i]-mini;
                    maxi=max(pro,maxi);
                }
            }
            return maxi;
        }
};