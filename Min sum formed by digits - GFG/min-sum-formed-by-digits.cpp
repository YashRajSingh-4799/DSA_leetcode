// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // Your code goes here
         sort(arr,arr+n);
        long min1 = 0;
        long min2 = 0;
        long min;
        
        int i=0;
        while(i<n){
            if(i%2==0)  min1 = min1*10 + arr[i];
            else min2 = min2*10 + arr[i];
            i++;
        }
        min = min1+min2;
        return min;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends