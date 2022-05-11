// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
   {
       //code here
       int n= grid.size();
       int m=grid[0].size();
       vector<vector<bool>> visited(n,vector<bool>(m,false));
       
       int dx[4]={-1,1,0,0};
       int dy[4]={ 0,0,-1,1};
       
       int src_x=0,src_y=0;
       int dest_x=0,dest_y=0;
       
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j]==1){
                   src_x=i;
                   src_y=j;
               }
               if(grid[i][j]==2){
                   dest_x=i;
                   dest_y=j;
               }
           }
       }
       queue<pair<int,int>> q;
       q.push({src_x,src_y});
       visited[src_x][src_y]=true;
       
       while(!q.empty()){
           auto f = q.front();
           int currX= f.first;
           int currY= f.second;
           
           if(currX==dest_x && currY==dest_y) return true;
           
           q.pop();
           for(int i=0;i<4;i++){
               int newX = currX +dx[i];
               int newY = currY +dy[i];
               
               if(newX>=0 && newX<n && newY>=0 && newY<m && !visited[newX][newY] 
               && grid[newX][newY]!=0){
                   q.push({newX,newY});
                   visited[newX][newY]=true;
               }
           }
       }
      return false;
   }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends