// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
   vector<vector<int>> res;
    	public:
    	//Function to find all possible unique subsets.
    	void rec(int ind, int n, vector<int>& ans, vector<int> arr){
        	if(ind == n)    {res.push_back(ans);return;}
        	
        	if(ind < n){
            	ans.push_back(arr[ind]);
            	rec(ind+1, n, ans, arr);
            	while(ind < n-1 and arr[ind] == arr[ind+1])     ind++;
            	ans.pop_back();
        	}
        	rec(ind+1, n, ans,arr);
    	}
    	vector<vector<int> > AllSubsets(vector<int> arr, int n)
    	{
        	// code here 
        	sort(arr.begin(), arr.end());
        	vector<int> ans;
        	rec(0, n, ans, arr);
        	sort(res.begin(), res.end());
        	return res;
    	}
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends