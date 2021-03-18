/* REAL INTERVIEW QUESTION*/
// LeetCode
// 1314. Matrix Block Sum

class Solution {
public:
    
    void sum(vector<vector<int>>& mat, int cmin, int cmax, int rmin, int rmax , int i, int j, vector<vector<int>>& ans){
        int temp=0;     
        for(int r=rmin; r<=rmax; r++){
            for(int c=cmin; c<=cmax; c++){
                temp+= mat[r][c];
            }
        }
        
        ans[i][j] += temp;
       
    }
    
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        int m = mat.size();
		int n = mat[0].size();
        vector<vector<int>> ans(m , vector<int>(n, 0));
        
        for(int i=0; i<m; i++){
            
            for(int j=0; j<mat[i].size(); j++){
                
                int rmin = ((i - K) < 0 ? 0 : (i - K));
				int rmax = (i + K) >= mat.size() ? (mat.size() - 1) : (i + K);
				int cmin = ((j - K) < 0 ? 0 : (j - K));
				int cmax = (j + K) >= mat[i].size() ? (mat[i].size() - 1) : (j + K);
                
                sum(mat, cmin, cmax, rmin, rmax, i, j, ans);
                
            }
        }
        
       
        return ans;
    }
};
