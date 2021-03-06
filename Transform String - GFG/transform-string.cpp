// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        vector<int> freq(260);
        for(auto& c:A){
            freq[c]++;
        }
        for(auto& c:B){
            freq[c]--;
        }
        for(auto& x:freq){
            if(x!=0){
                return -1;
            }
        }
        
        int n = A.length(),m = B.length(),j = m - 1;
        for(int i=n-1;i>=0;i--){
            if(A[i]==B[j]){
                j--;
            }
        }
        return j+1;
    }
};


// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends