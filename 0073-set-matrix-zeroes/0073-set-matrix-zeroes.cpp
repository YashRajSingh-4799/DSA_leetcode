class Solution {
public:
     void setZeroes(vector<vector<int>>& matrix) {
  
        int m =matrix.size();   //row size
        int n = matrix[0].size();   //column size
		
		 // for the first row & first col set x=1 & y=1 respectively as flag values.
        int x =1;
        int y =1;
		
		// marking x = 0 if any column element is 0
        for(int j=0;j<n;j++)
        {
            if(matrix[0][j]==0)
			     x=0;  
        }
        
		// marking y = 0 if any row element is 0
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]==0)
			     y=0;
        }
       
         // Now checking if elements is 0 starting from row index 1 and column index 1 if yes then marking the zeroth index row and column element of respective index element as 0 
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        // If any value of zeroth column is 0 then marking every element of that column as 0
         for(int j=1;j<n;j++)
        {
           if(matrix[0][j]==0)
           {
               for(int i=1;i<m;i++)
                   matrix[i][j]=0;
           }
        }
        
		  // If any value of zeroth row is 0 then marking every element of that row as 0
        for(int i=1;i<m;i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=1;j<n;j++)
                    matrix[i][j]=0;
            }
        }
        
		//If y is 0 then mark all element in that row as 0
        if(y==0)
        {
            for(int i=0;i<m;i++)
            {
                matrix[i][0]=0;
            }
        }
        
		//If x is 0 then mark all element in that column as 0
         if(x==0)
        {      
             for(int j=0;j<n;j++)
			 {
                    matrix[0][j]=0;
			 }
        }
}		
};