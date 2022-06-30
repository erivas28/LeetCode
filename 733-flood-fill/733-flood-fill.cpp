class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int old_color = image[sr][sc];
        
        dfs(image, sr, sc, color, old_color);
        
        return image;
    }
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int old_color) {
        
        // Skip pixels out of bounds
        if(sr < 0 || sr >= image.size()) return;
        if(sc < 0 || sc >= image[0].size()) return;
        
        // Skip pixels already the desired color
        // or that don't match the clicked color
        if(image[sr][sc] == color) return;
        if(image[sr][sc] != old_color) return;
        
        // Set desired color
        image[sr][sc] = color;
        
        // Recursively explore pixels 4-directionally connected
        dfs(image, sr, sc + 1, color, old_color); // E
        dfs(image, sr - 1, sc, color, old_color); // N
        dfs(image, sr, sc - 1, color, old_color); // W
        dfs(image, sr + 1, sc, color, old_color); // S
    }
};

