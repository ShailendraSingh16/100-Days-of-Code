class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) { 

                int count = 0;
                
                for(int i=0; i<grid.size(); i++) {
                int s = 0;
               int e = grid[0].size()-1;
            int fbv = -1;
            while(s<=e) {
                int mid = s+(e-s/2);

                if(grid[i][mid]<0){
                    fbv = mid;

                    e = mid-1;
                }
                 else{
                    s = mid+1;
                }
            }
            if(fbv!=-1) {
                count += grid[0].size() - fbv;
            }
        }
        return count;
    }
};
