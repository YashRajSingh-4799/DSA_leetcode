// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    vector<int>remain(n, 0);
    unordered_map<int, int>umap;
    umap.insert({0, -1});
    int sum=0, res=0;
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
        int r = sum%k;
        
        if(r<0){
            r+=k;
        }
        
        if(umap.count(r)){
            int len = i - umap[r];
            res = max(res, len);
        }
        else{
            umap.insert({r, i});
        }
    }
    return res;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends