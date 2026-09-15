class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();

        unordered_map<int, int> pos;

        for (int i = 0; i < n; i++) {
            pos[arr[i]] = i;
        }

        vector<vector<int>> dp(n, vector<int>(n, 2));

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int prev = arr[j] - arr[i];

                if (pos.count(prev)) {
                    int k = pos[prev];

                    if (k < i) {
                        dp[i][j] = dp[k][i] + 1;
                    }
                }

                ans = max(ans, dp[i][j]);
            }
        }

        return ans >= 3 ? ans : 0;
    }
};