class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int status_x=0;
        int status_y=0;
        if(rec2[0]<rec1[2] && rec2[2]>rec1[0]) status_x = 1;
        if(rec2[1]<rec1[3] && rec2[3]>rec1[1]) status_y = 1;
        if(status_x*status_y) return 1;
        return 0;
    }
};