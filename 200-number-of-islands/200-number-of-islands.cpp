class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) {
            return 0;
        }
        
        int count = 0;
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == '1') {
                    count += 1;
                    callDFS(grid, i, j);
                }
            }
        }
        
        return count;
    }
    
    void callDFS(vector<vector<char>>& grid, int i, int j) {
        while(i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] == '0') {
            return;
        }
        
        grid[i][j] = '0';
        
        callDFS(grid, i + 1, j);
        callDFS(grid, i - 1, j);
        callDFS(grid, i, j + 1);
        callDFS(grid, i, j - 1);
    }
};