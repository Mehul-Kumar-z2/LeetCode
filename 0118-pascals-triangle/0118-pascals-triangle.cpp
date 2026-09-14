class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pas(numRows);
        pas[0].push_back(1);
        if(numRows==1) return pas;
        pas[1].insert(pas[1].end(), {1, 1});
        if(numRows==2) return pas;
        for(int i=2; i<numRows; i++){
            int n = i;
            pas[i].push_back(1);
            int j=1;
            while(j<n){
                pas[i].push_back(pas[i-1][j] + pas[i-1][j-1]);
                j++;
            }
            pas[i].push_back(1);
        }
        return pas;
    }
};