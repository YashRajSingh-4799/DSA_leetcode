// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
     unordered_map<string,int> m;
    vector<string> ans;
    public:
    void fn(string r,string k)
    {
        string p;
        for(int i=1;i<=r.size();i++)
        {
            p=r.substr(0,i);
            if(m[p] && i==r.size())
                ans.push_back(k+p);
            else if(m[p]==1)
                fn(r.substr(i),k+p+" ");
        }

    }
    vector<string> wordBreak(int n, vector<string>& d, string s)
    {
        for(int i=0;i<n;i++)
            m[d[i]]=1;
        fn(s,"");
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends