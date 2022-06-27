// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        // code here
          int first=0;
       int p=1;
       while(p<N)
       {
           if((p&N)==0)
               first+=p;
           p=p<<1;
       }
       int second=first+N;
       vector<int> v;
       v.emplace_back(first);
       v.emplace_back(second);
       return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends