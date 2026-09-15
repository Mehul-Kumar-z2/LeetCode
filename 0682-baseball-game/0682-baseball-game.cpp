class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        int n = operations.size();
        int i=0;
        int k=0;
        int sum=0;
        while(i<n){
            string c = operations[i];
            
            if(c=="+"){
                score.push_back(score[k-1]+score[k-2]);
                sum += score[k];
                k++;
            }
            else if(c=="D"){
                score.push_back(2*score[k-1]);
                sum += score[k];
                k++;
            }
            else if(c=="C"){
                sum -= score[k-1];
                score.pop_back();
                k--;
            }
            else{
                score.push_back(stoi(c));
                sum += score[k];
                k++;
            }
            i++;
        }
        return sum;
    }
};