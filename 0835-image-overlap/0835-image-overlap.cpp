class Solution {
public:

    int calculateOverlap(vector<vector<int>>& img1,
                         vector<vector<int>>& img2,
                         int dx, int dy) {

        int n = img1.size();
        int overlap = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int x = i + dx;
                int y = j + dy;

                if (x >= 0 && x < n &&
                    y >= 0 && y < n) {

                    if (img1[i][j] == 1 &&
                        img2[x][y] == 1) {
                        overlap++;
                    }
                }
            }
        }

        return overlap;
    }

    int solve(vector<vector<int>>& img1,
              vector<vector<int>>& img2,
              int dx,
              int dy,
              vector<vector<bool>>& visited) {

        int n = img1.size();
        int offset = n - 1;

        int x = dx + offset;
        int y = dy + offset;

        if (x < 0 || x >= 2*n-1 ||
            y < 0 || y >= 2*n-1) {
            return 0;
        }

        if (visited[x][y]) {
            return 0;
        }

        visited[x][y] = true;

        int overlap = calculateOverlap(img1, img2, dx, dy);

        overlap = max(overlap,
                      solve(img1, img2, dx + 1, dy, visited));

        overlap = max(overlap,
                      solve(img1, img2, dx - 1, dy, visited));

        overlap = max(overlap,
                      solve(img1, img2, dx, dy + 1, visited));

        overlap = max(overlap,
                      solve(img1, img2, dx, dy - 1, visited));

        return overlap;
    }

    int largestOverlap(vector<vector<int>>& img1,
                       vector<vector<int>>& img2) {

        int n = img1.size();

        vector<vector<bool>> visited(
            2*n - 1,
            vector<bool>(2*n - 1, false)
        );

        return solve(img1, img2, 0, 0, visited);
    }
};