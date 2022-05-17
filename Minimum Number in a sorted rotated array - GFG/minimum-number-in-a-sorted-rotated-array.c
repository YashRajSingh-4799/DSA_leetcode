// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C


//Function to find the minimum element in sorted and rotated array.
int minNumber(int arr[], int low, int high)
{
    if(low >= high)
        return arr[low] ;
    
    int mid = (low+high)/2 ;
    
    if(arr[mid] >= arr[low]){
        if(arr[high] >= arr[mid])
            return arr[low] ;
        else
            return minNumber(arr,mid+1,high) ;
    }else
        return minNumber(arr,low,mid) ;
}

// { Driver Code Starts.

int main()
{
	
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;++i)
			scanf("%d", &a[i]);	
	
		printf("%d\n", minNumber(a,0,n-1) );
	}
	return 0;
}  // } Driver Code Ends