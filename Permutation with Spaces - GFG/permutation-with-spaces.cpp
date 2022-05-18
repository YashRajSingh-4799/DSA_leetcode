// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:

   vector<string> permutation(string S){
       // Code Here
       int i=1;
       vector<string>res;
       queue<pair<string,int>>q;
       string s="";
       s+=S[0];
       q.push({s,1});
       while(!q.empty()){
           int x=q.size();
           for(int j=0;j<x;j++){
               auto a=q.front();
               q.pop();
               string s1=a.first;
               if(s1[s1.length()-1]==S[S.length()-1]&&a.second==S.length())res.push_back(s1);
               if(s1[s1.length()-1]!=' '&&i<S.length()){
                   q.push({s1+" "+S[i],a.second+1});
               }
               if(i<S.length())q.push({s1+S[i],a.second+1});
           }
           i++;
           
       }
       return res;
       
   }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends