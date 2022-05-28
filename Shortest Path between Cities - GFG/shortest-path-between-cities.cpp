// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int shortestPath( int x, int y){ 
        // code here 
         vector<int>p1;
       vector<int>p2;
       if(x>y)
       {
           return shortestPath(y,x);
       }
       while(y!=0)
       {
           p1.push_back(y);
           y=y/2;
       }
       while(x!=0)
       {
           p2.push_back(x);
           x=x/2;
       }
       int n1=p1.size();
       int n2=p2.size();
       int c=n1+n2;
       int i=p1.size()-1;
       int j=p2.size()-1;
       while(i>=0 and j>=0)
       {
           if(p1[i]==p2[j])
           {
               c=c-2;
           }
           if(p1[i]!=p2[j])
           {
               break;
           }
           i--;
           j--;
       }

       return c;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<< ob.shortestPath(x,y) << endl;
    }
    return 0; 
}   // } Driver Code Ends