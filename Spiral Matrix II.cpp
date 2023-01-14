class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>>ans(n,vector<int>(n));
        int count=0;

        int startRow=0;
        int startCol=0;
        int endRow=n-1;
        int endCol=n-1;

        while(startRow<=endRow && startCol<=endCol){
            
            for(int index=startCol;index<=endCol;index++){
                ans[startRow][index]=++count;
        
            }

            for(int index=startRow+1;index<=endRow;index++){
                ans[index][endCol]=++count;
            }

            for(int index=endCol-1;index>=startCol;index--){
                ans[endRow][index]=++count;
            }

            for(int index=endRow-1;index>startRow;index--){
                ans[index][startCol]=++count;
            }
            
        startRow++;
        startCol++;
        endRow--;
        endCol--;
        }
        return ans;
    }
};
