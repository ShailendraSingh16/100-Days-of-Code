#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix){

    vector<int>ans; 

    int row=matrix.size();
    int col=matrix[0].size();
    
    int count=0;
    int total=row*col-1;

    int startRow=0;
    int endRow=row-1;
    int startCol=0;
    int endCol=col-1;

    while(count<=total && startRow<=endRow && startCol<=endCol){

        for(int i=startCol;i<=endCol;i++){
            ans.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;

        for(int i=startRow;i<=endRow;i++){
            ans.push_back(matrix[i][endCol]);
            count++;
        }
        endCol--;

        for(int i=endCol;i>=startCol;i--){
            ans.push_back(matrix[endRow][i]);
            count++;
        }
        endRow--;

        for(int i=endRow;i>=startRow;i--){
            ans.push_back(matrix[i][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    vector<int>finalAns=spiralOrder(matrix);

    for(int i=0;i<finalAns.size();i++){
        cout<<finalAns[i]<<" ";
    }

    return 0;
}
