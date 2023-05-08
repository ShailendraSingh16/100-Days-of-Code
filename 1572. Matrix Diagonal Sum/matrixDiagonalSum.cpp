#include<bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>> &mat){
    int ans=0;
    int row=mat.size();
    int col=mat[0].size();

    for(int i=0;i<row;i++){
        ans+=mat[i][i];
        ans+=mat[i][row-i-1];
    }

    int a=mat[row/2][col/2];
    if(row%2!=0){
        return (ans-a);
    }
    return ans;
}

int main(){
    int row,col;
    cin>>row>>col;

    vector<vector<int>>mat(row,vector<int>(col));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }

    cout<<diagonalSum(mat);

    return 0;
}

/*
TC: O(n)
SC: O(1)
8/
