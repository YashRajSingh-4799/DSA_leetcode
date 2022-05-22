// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string s ,int Q, int index[], string sources[], string target[]) {
        // code here
        string w=s;
       int i=0;
       int add=0;
       while(Q--)
       {
           if(index[i]+add+sources[i].size()>s.length())
           {
               i++;
               continue;
           }
           if(s.substr(index[i]+add,sources[i].size())==sources[i])
           {
               s.replace(index[i]+add,sources[i].size(),target[i]);
               add+=target[i].size()-sources[i].size();
           }
           i++;
       }
       return s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends