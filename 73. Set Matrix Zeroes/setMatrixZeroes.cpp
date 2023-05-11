class Solution {
private:
void update(vector<vector<int>> &matrix, int i, int j){

    for(int m=0;m<matrix.size();m++){
        matrix[m][j]=0;
    }

    for(int n=0;n<matrix[0].size();n++){
        matrix[i][n]=0;
    }
}

public:
    void setZeroes(vector<vector<int>>& matrix) {

            int row=matrix.size();
    int col=matrix[0].size();
    
    vector<vector<int>>isZero(matrix.size(),vector<int>(matrix[0].size(),0));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                isZero[i][j]=1;
            }
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if((matrix[i][j]==0) && (isZero[i][j]==1)){
                update(matrix,i,j);
                isZero[i][j]=0;
            }
        }
    }
        
    }
};
