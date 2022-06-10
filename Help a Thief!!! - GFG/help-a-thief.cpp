// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
              int sum = 0;
       while(T){
           int n = 0;
           int max = 0;
           for(int i = 0 ; i < N ; i++){
               if(B[i]>max){
                   n = i;
                   max = B[i];
               }
           }
           A[n]--;
           T--;
           sum += B[n];
           if(A[n]==0){
               B[n] = 0;
           }
       }
       return sum;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends