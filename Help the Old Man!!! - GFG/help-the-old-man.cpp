// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<pair<int,int>> ans;
    void toh(int N,int start,int aux,int end,int n){
        if(N<=0) return;
        toh(N-1,start,end,aux,n-1);
        ans.push_back({start,end});
        toh(N-1,aux,start,end,n-1);
    }
    
    vector<int> shiftPile(int N, int n){
         toh(N,1,2,3,n);
        return {ans[n-1].first,ans[n-1].second};
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends