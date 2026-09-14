class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> arr;
       arr.push_back(0);
       int k=1;
       for(int i=1; i<=n; i++){
        if(i==2*k) k = k*2;
        arr.push_back(1+ arr[i%k]);
       } 
       return arr;
    }
};