#include <bits/stdc++.h>
using namespace std;
#define int long long
  vector<vector<string>> ans;
    vector<string> board;
    int n;
    // 1. 判断当前位置是否合法
    bool isValid(int row, int col) {
        // 检查正上方
        for(int i=row-1;i>=0;i--){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        // 检查左上方
        for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        // 检查右上方
        for(int i=row-1,j=col+1;i>=0&&j<=n;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }

    // 2. 回溯函数
    void backtrack(int row) {
        // 终止条件：所有行都放好了
        if(row==n){
            ans.push_back(board);
            return;
        }
        // 枚举当前行的每一列
        for (int col = 0; col < n; col++) {
            // 判断当前位置是否合法
            if(!isValid(row,col)){
                continue;
            }
             // 放置皇后  
             board[row][col]='Q';
            
            // 递归下一行
            backtrack(row+1);
            // 撤销选择
            board[row][col]='.';

        }
    }

    // 3. 入口函数
    vector<vector<string>> solveNQueens(int size) {
        n=size;
        //this->n = n; this 是 C++ 中的指针，指向当前对象，只能在类的非静态成员函数中使用。
        board = vector<string>(n, string(n, '.'));

        backtrack(0);
        return ans;
    }
signed main() {
    
 return 0;
}